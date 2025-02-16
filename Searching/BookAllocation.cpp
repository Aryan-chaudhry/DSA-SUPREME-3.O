#include<bits/stdc++.h>
using namespace std;

int bruteForce(vector<int>&Books, int n, int m){
    
    if(m > n){
        return -1;
    }
    
    vector<int>store;

    for(int i=1; i<=Books.size()-1; i++){

        int leftSum = 0;
        int rightSum = 0;

        for(int left = 0; left<i; left++){
            leftSum += Books[left];
        }
        cout << "Left Sum : " << leftSum << endl;

        for(int right = i; right<Books.size(); right++){
            rightSum += Books[right];
        }
        cout << "Right Sum : " << rightSum << endl;

        int myAns = max(leftSum, rightSum);
        cout << "Maxi : " << myAns << endl;
        store.push_back(myAns);

    }

    int mini = INT_MAX;

    for(int i=0; i<store.size(); i++){
        mini = min(mini, store[i]);
    }
    return mini;

    // Time complexity  : O(n^2);
}

bool isPossible(vector<int>&Books, int n, int m , int mid){

    int pagesum = 0;
    int count = 1;

    for(int i=0; i<n; i++){
        if(Books[i] > mid){
            return false;
        }
        if(pagesum + Books[i] > mid){
            count++;
            pagesum = Books[i];

            if(count > m){
                return false;
            }
        }
        else{
            pagesum += Books[i];
        }
    }
    return true;
}

int optimized(vector<int>&Books, int n, int m){
    if(m > n){
        return -1;
    }

    int st = 0;
    int end = accumulate(Books.begin(), Books.end(), 0);
    int ans = -1;

    while(st <= end){
        
        int mid = st + (end - st)/2;

        if(isPossible(Books, n, m, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }

    return ans;
}
int main(){
    
    vector<int>Books = {12, 34, 67, 90};
    int n = Books.size();
    int m = 2;

    int ans1 = bruteForce(Books, n, m);
    cout << "Ans from bruetForce : " << ans1 << endl;

    int ans2 = optimized(Books, n, m);
    cout << "Ans from Optmized : " << ans2 << endl;

    return 0;
}

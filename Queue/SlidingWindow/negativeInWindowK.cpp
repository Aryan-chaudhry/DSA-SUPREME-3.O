#include<bits/stdc++.h>
using namespace std;

vector<int> findNegative(vector<int>&arr, int k){

    vector<int>ans;
    deque<int>dq;

    // 3 step process

    // 1 step --> process the first window
    for(int i=0; i<k; i++){
        if(arr[i] < 0){
            dq.push_back(i);
        }
    }

    // 2 step --> store the answer of first window
    if(dq.empty()){
        ans.push_back(0);
    }
    else{
        int index = dq.front();
        int element = arr[index];
        ans.push_back(element);
    }

    // 3 step --> process the remaining element
    for(int i=k; i<arr.size(); i++){
        // removal
        if(!dq.empty() && dq.front() < i-k+1){
            dq.pop_front();
        }

        // insertion
        int element = arr[i];
        if(element < 0){
            dq.push_back(i);
        }
        
        // store ans of remaining window
        if(dq.empty()){
            ans.push_back(0);
        }
        else{
            int index = dq.front();
            int element = arr[index];
            ans.push_back(element);
        }
    }
    return ans;
}

int main(){
    vector<int>arr = {-8,2,2,-6,10};
    int k=2;

    vector<int>ans = findNegative(arr, k);

    for(auto no : ans){
        cout << no << " ";
    }

    return 0;
}
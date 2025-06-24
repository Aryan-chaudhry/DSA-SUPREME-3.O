#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>&arr, int k){
    vector<int>ans;
    deque<int>dq;

    // process the first window
    for(int i=0; i<k; i++){
        int element = arr[i];
        while(!dq.empty() && arr[dq.back()] < element){
            dq.pop_back();
        }
        dq.push_back(i);
    }

    // get answer of first window
    int index = dq.front();
    int element = arr[index];
    ans.push_back(element);

    // process the remaining window
    for(int i=k; i<arr.size(); i++){
        // removal
        if(!dq.empty() && dq.front() < i-k+1){
            dq.pop_front();
        }

        // insertion
        int element = arr[i];

        while(!dq.empty() && arr[dq.back()] < element){
            dq.pop_back();
        }
        dq.push_back(i);

        // ans store
        int index = dq.front();
        int no = arr[index];
        ans.push_back(no);
    }
    return ans;    
}

int main(){
    vector<int>arr = {1,5,7,8,6,3};
    int k = 2;

    vector<int>ans = solve(arr, k);

    for(auto no : ans){
        cout << no << " ";
    }
    return 0;
}
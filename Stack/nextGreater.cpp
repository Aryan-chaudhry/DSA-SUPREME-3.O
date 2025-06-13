#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&arr, vector<int>&ans){
    stack<int>st;

    for(int i=arr.size()-1; i>=0; i--){
        int element = arr[i];
        while(!st.empty() && st.top() <= element){
            st.pop();
        }
        if(st.empty()){
            ans.push_back(-1);
        }
        else{
            ans.push_back(st.top());
        }
        st.push(element);
    }
    reverse(ans.begin(),ans.end());
}

int main(){
    vector<int>arr = {6,8,0,1,3};
    vector<int>ans;
    solve(arr, ans);
    
    for(int no : ans){
        cout << no << " ";
    }
    return 0;
}
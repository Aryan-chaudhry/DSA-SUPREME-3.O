#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&arr, vector<int>&ans){
    stack<int>st;

    for(int i=0; i<arr.size(); i++){
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
}

int main(){
    vector<int>arr = {3,1,2,3};
    vector<int>ans;

    solve(arr, ans);

    for(auto no : ans){
        cout << no << " ";
    }
}
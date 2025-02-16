#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

void solve(vector<int>&arr,  vector<int>&ans){

    stack<int>st;
    st.push(-1);

    for(int i=0; i<arr.size(); i++){
        int element = arr[i];

        while(st.top() >= element){
            st.pop();
        }
        ans.push_back(st.top());
        st.pop();
    }
}

int main(){
    

    vector<int>arr;
    arr.push_back(0);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
 


    vector<int>ans;

    solve(arr, ans);

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}
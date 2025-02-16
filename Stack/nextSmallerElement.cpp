#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

void solve(stack<int>&st, vector<int>&v, vector<int>&ans){
    for(int j=v.size()-1; j>=0; j--){
        int element = v[j];

        
        while(st.top() >= element){
            st.pop();
        }
        // aapke stack top par pakka koi chotha element pada hua hain
        ans.push_back(st.top());
        st.push(element);        
    }
}

int main(){
    stack<int>st;
    st.push(-1);

    vector<int>v = {0,1,0,2,1,0,1,3,2,1,2,1};
   

    vector<int>ans;
    
    solve(st, v, ans);
    reverse(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
}


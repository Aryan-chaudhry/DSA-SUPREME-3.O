#include<bits/stdc++.h>
using namespace std;

void nextSmaller(vector<int>&arr, vector<int>&next){
    stack<int>st;
    st.push(-1);

    for(int i=arr.size()-1; i>=0; i--){
        int element = arr[i];
        while(st.top() != -1 && arr[st.top()] >= element){
            st.pop();
        }
        next.push_back(st.top());
        st.push(i);
    }
    reverse(next.begin(),next.end());
}

void prevSmaller(vector<int>&arr, vector<int>&prev){
    stack<int>st;
    st.push(-1);

    for(int i=0; i<arr.size(); i++){
        int element = arr[i];
        while(st.top() != -1 && arr[st.top()] >= element){
            st.pop();
        }
        prev.push_back(st.top());
        st.push(i);
    }
}

int main(){
    vector<int>arr = {2,1,5,6,2,3};
    
    vector<int>next;
    vector<int>prev;

    nextSmaller(arr, next);
    prevSmaller(arr, prev);

    for(int i=0; i<next.size(); i++){
        if(next[i] == -1){
            next[i] = next.size();
        }
    }

    int maxArea = 0;
    for(int i=0; i<arr.size(); i++){
        int width = next[i]-prev[i]-1;
        int length = arr[i];
        int area = width*length;
        maxArea = max(maxArea,area);
    }
    cout << "Maximum Area is : " << maxArea << endl;
}
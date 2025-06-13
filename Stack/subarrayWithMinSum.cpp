#include<bits/stdc++.h>
using namespace std;

void nextSmaller(vector<int>&arr, vector<int>&next){
    stack<int>st;
    st.push(-1);

    for(int i=arr.size()-1; i>=0; i--){
        int element = arr[i];
        while(!st.empty() && arr[st.top()] >= element){
            st.pop();
        }
        next.push_back(st.top());
        st.push(i);
    }
    reverse(next.begin(), next.end());
}

void prevSmaller(vector<int>&arr, vector<int>&prev){
    stack<int>st;
    st.push(-1);

    for(int i=0; i<arr.size(); i++){
        int element = arr[i];
        while(!st.empty() && arr[st.top()] >= element){
            st.pop();
        }
        prev.push_back(st.top());
        st.push(i);
    }
}

int findMinSum(vector<int>&arr){
    vector<int>next;
    vector<int>prev;

    nextSmaller(arr, next);
    prevSmaller(arr, prev);

    for(int i=0; i<next.size(); i++){
        if(next[i] == -1){
            next[i] = next.size();
        }
    }
    
    long long sum = 0;

    for(int i=0; i<arr.size(); i++){
        int nexti = next[i]-i;
        int previ = i-prev[i];
        int no_of_time = nexti * previ;
        int total = no_of_time * arr[i];
        sum += total;
    }
    return sum;
}

int main(){
    vector<int>arr = {3,1,2,4};
    int sum = findMinSum(arr);
    cout << sum << endl;
}
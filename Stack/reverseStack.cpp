#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int>&st, int no){
    if(st.empty()){
        st.push(no);
        return;
    }
    
    int top = st.top();
    st.pop();
    insertAtBottom(st, no);

    st.push(top);
}

void reverseStack(stack<int>&st){
    // base case
    if(st.empty()) return;

    int ele = st.top();
    st.pop();

    reverseStack(st);

    insertAtBottom(st, ele);
}

int main(){
    stack<int>st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverseStack(st);


    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
}
#include<bits/stdc++.h>
using namespace std;

void insertElement(stack<int>&st, int no){
    if(st.top() <= no){
        st.push(no);
        return;
    }

    int top = st.top();
    st.pop();

    insertElement(st, no);

    st.push(top);
}

int main(){
    stack<int>st;

    int no = 33;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    insertElement(st, no);

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}
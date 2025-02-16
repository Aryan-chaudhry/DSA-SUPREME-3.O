/*
insert at bottom without pop 
*/


#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&st, int value){
    // base case 
    if(st.empty()){
        st.push(value);
        return;
    }

    // 1 case me solve karunga bake recursion sambhal lega
    int top = st.top();
    st.pop();

    // recursion sambhal le bhai
    // recurion --> chinta mat kar me hu na
    insertAtBottom(st, value);

    // backtrack
    st.push(top);
}

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    int value = 13;

    insertAtBottom(st, value);


    // traverse
    while(!st.empty()){
        cout << st.top() << endl ;
        st.pop();
    }
    cout << endl;

    return 0;
}


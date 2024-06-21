#include<iostream>
#include<stack>
using namespace std;

int main(){
    // creation
    stack<int>st;
    // insert
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // remove
    st.pop();
    // top
    cout << "Top : " << st.top() << endl;
    // size
    cout << "Size : " << st.size() << endl;
    // empty
    if(st.empty()){
        cout << "Stack is empty" << endl;
    } 
    else{
        cout << "Stack is not empty" << endl;
    }
    stack<int>first;
    stack<int>second;

    first.push(10);
    first.push(20);

    second.push(30);
    second.push(40);

    first.swap(second);

    cout << "First : " << first.top() << endl;
    cout << "Second : " << second.top() << endl;
}

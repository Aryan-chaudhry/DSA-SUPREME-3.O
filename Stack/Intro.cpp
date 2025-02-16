#include<stack>
#include<iostream>
using namespace std;

int main(){
    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << "size : " << st.size() << endl;

    st.pop();

    cout << "size : " << st.size() << endl;

    // top

    cout << "top : " << st.top() << endl;
}
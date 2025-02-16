#include<stack>
#include<iostream>
using namespace std;

int main(){
    stack<char>st;

    string name = "Aryan";

    // insert in stack

    for(int i=0; i<name.length(); i++){
        char ch = name[i];
        st.push(ch);
    }

    // remove and print characters from stack
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
    return 0;
}


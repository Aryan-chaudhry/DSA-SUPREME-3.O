#include<iostream>
#include<stack>
using namespace std;

void printMiddle(stack<int>&st, int count){
    // base case
    if(count == 0){
        cout << "Middle Element : " << st.top() << endl;
        return;
    }

    // ek case mujhe solve karna hain bake recurion sambhal lega
    int Element = st.top();
    st.pop();
    count--;

    // recursion ab tu sambhal le bhai
    // recursion --> chinta mat kar me hu na

    printMiddle(st, count);

    // backtrack
    st.push(Element);
}

int main(){
    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    int count = st.size()/2;
    printMiddle(st, count);

    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }

    return 0;

}
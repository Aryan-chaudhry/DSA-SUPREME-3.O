#include<bits/stdc++.h>
using namespace std;

bool checkSorted(stack<int>&st, int element1){
    if(st.empty()){
        return true;
    }

    // ek case solve karna hai
    int element2 = st.top();
    st.pop();
    if(element2 < element1){
        return checkSorted(st, element2);
    }
    else{
        return false;
    }
}

int main(){
    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(5);
    st.push(40);
    st.push(50);
    int element1 = INT_MAX;

    bool ans = checkSorted(st, element1);
    if(ans) cout << "sorted";
    else cout << "Not sorted";
}
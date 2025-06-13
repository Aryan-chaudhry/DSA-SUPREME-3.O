#include<bits/stdc++.h>
using namespace std;

bool solve(string &str){
    stack<char>st;

    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            st.push(ch);
        }
        else{
            bool isRedundant = true;
            if(ch == ')'){
                
                while(!st.empty() && st.top() != '('){
                    char top = st.top();
                    if(top == '+' || top == '-' || top == '*' || top == '/'){
                        isRedundant = false;
                    }
                    st.pop();
                }
                if(isRedundant == true){
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}

int main(){
    string str = "(a+(b+c))";
    bool ans = solve(str);
    if(ans) {
        cout << "Redundant brackets found" << endl;
    } else {
        cout << "No redundant brackets" << endl;
    }
}
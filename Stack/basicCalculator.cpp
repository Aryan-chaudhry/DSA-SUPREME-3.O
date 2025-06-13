#include<bits/stdc++.h>
using namespace std;

int solve(string &str){
    stack<int>st;

    int num = 0;
    int sign = 1;
    int result = 0;

    for(auto ch : str){
        if(isdigit(ch)){
            num = num*10 + ch -'0';
        }
        else if(ch == '+'){
            result = result + sign*num;
            sign = 1;
            num = 0;
        }
        else if(ch == '-'){
            result = result + sign*num;
            sign = -1;
            num = 0;
        }
        else if(ch == '('){
            st.push(result);
            st.push(sign);
            result = 0;
            sign = 1;
        }
        else if(ch == ')'){
            result += sign*num;
            int sign = st.top(); st.pop();
            result *= sign;
            result += st.top(); st.pop();
            num = 0;
        }
    }
    result += sign*num;
    return result;
    
}

int main(){
    string str = "1 + (2-(3+5))";
    int ans = solve(str);
    cout << "Ans : " << ans << endl;
}
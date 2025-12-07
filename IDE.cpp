#include<bits/stdc++.h>
using namespace std;

void solve(string &str, vector<string>&ans){
    string store = "";

    for(int i=0; i<str.length(); i++){
        while( i<isalpha(str[i])){
            store += str[i];
            i++;
        }

        if(!store.empty()){
            ans.push_back(store);
            store = "";
        }
    }

    for(auto str : ans){
        cout << str << endl; 
    }
}

int main(){
    string str = "Hi i     am Aryan";

    vector<string>ans;

    solve(str, ans);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void solve(string &s, vector<string>&ans){
    
    int i=0;
    // remove all leading space
    while(s[i] == ' '){
        i++;
    }

    while(i < s.length()){
        string word;
        while(isalpha(s[i])){
            word.push_back(s[i]);
            i++;
        }
        ans.push_back(word);
        // make sure to go on next word so for that skip spaces
        while(s[i] == ' '){
            i++;
        }
    }
}

int main(){
    string s = "dog cat cat dog";
    vector<string>ans;
    solve(s, ans);

    for(auto word : ans){
        cout << word << endl;
    }

    cout << ans.size() << endl;
}
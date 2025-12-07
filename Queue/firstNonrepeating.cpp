#include<bits/stdc++.h>
using namespace std;

string solve(string &s){
    unordered_map<char,int>mp;
    queue<char>q;
    string ans;

    for(auto ch : s){
        mp[ch]++;
        q.push(ch);

        while(!q.empty()){
            char frontNode = q.front();

            if(mp[frontNode] == 1){
                ans.push_back(frontNode);
                break;
            }
            else{
                q.pop();
            }
        }

        if(q.empty()) ans.push_back('#');
    }
    return ans;
}

int main(){
    string s = "aabc";

    string ans = solve(s);

    cout << ans << endl;
    return 0;
}
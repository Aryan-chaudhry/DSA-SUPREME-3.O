#include<bits/stdc++.h>
using namespace std;


string Solve(string &s){
    queue<int>Radiant, Dire;
    int pos = 0;

    for(; pos<s.length(); pos++){
        if(s[pos] == 'R'){
            Radiant.push(pos);
        }
        else{
            Dire.push(pos);
        }
    }

    while(!Radiant.empty() && !Dire.empty()){
        auto R = Radiant.front();
        Radiant.pop();

        auto D = Dire.front();
        Dire.pop();

        if(R < D){
            // R kill D
            Radiant.push(pos++);
        }
        else{
            Dire.push(pos++);
        }
    }

    return Radiant.empty() ? "Dire" : "Radiant";
}

int main(){
    string s = "RDDRDDD";

    string ans = Solve(s);

    cout << ans << endl;
}
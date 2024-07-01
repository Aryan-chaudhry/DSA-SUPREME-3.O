#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string s = "egg", t = "add";

    unordered_map<char, char>mp;

    // see mapping
    for(int i=0; i<s.size(); i++){
        mp[s[i]] = t[i];
    }
    // traverse
    for(auto i:mp){
        cout << i.first << " " << i.second << endl;
    }

}
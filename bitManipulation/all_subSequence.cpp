#include<bits/stdc++.h>
using namespace std;

vector<string> findSubSequence(string &str){
    // first we have to create mask
    // and then use mask to create subsequence
   
    vector<string>ans;
 
    int length = str.length();
    int n = (1 << length);

    for(int num=0; num<n; num++){
        // for each mask, just find subsequence basis on the bit
        string temp = "";
        // now, will go to each index and check weather
        // i should include or exclude character

        for(int i=0; i<length; i++){
            char ch = str[i];
            int mask = (1 << i);
            if(num & mask){
                // can include the character
                temp.push_back(ch);
            }
        }
        if(temp.length() > 0)
            ans.push_back(temp);
    }
    return ans;
}

int main(){
    string str = "abc";

    vector<string>ans = findSubSequence(str);

    for(auto s : ans){
        cout << s << " ";
    }
    return 0;
}
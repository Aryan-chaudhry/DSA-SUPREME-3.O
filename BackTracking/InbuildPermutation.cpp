#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter  n";
    cin >> n;


    // generate all permuatioan which have no leading zero
    // method no 1 --> bruteForce
    // method no 2 --> using inbuild function

    vector<string>ans;

    if(n != 0){
        string str = to_string(n);
        sort(str.begin(), str.end());

        while(next_permutation(str.begin(),str.end())){
            if(str[0] != '0'){
                ans.push_back(str);
            }
        }

        
        for(auto &s : ans){
            cout << s << endl;
        }
    }

}


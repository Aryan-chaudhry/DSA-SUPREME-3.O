#include<iostream>
#include<vector>
using namespace std;

void findSequence(string str, int index, string output, vector<string> &ans){
    // base case
    if(index == str.length()){
        ans.push_back(output);
        return;
    }
    // ek case me solve karunga
    char ch = str[index];
    // a) include karo
    findSequence(str, index+1, output+ch, ans);
    // b) exclude karo
    findSequence(str, index+1, output, ans);
}

int main(){

    string str = "abc";
    string output = "";
    vector<string>ans;
    int index = 0;

    findSequence(str, index, output, ans);
    
    for(auto itr : ans){
        cout << itr << endl;
    }
    return 0;
}
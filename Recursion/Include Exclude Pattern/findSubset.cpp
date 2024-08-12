// ********vvvvv.important********


#include<iostream>
#include<vector>
using namespace std;

void findSubset(string input, string output, int index, vector<string>&ans){
    // base case 
    if(index == input.length()){
        ans.push_back(output);
        return;
    }
    // ek case me solve karunga bake recursion sambhal lega
    char ch = input[index];
    // a) include
    findSubset(input, output+ch, index+1, ans);
    // b) exclude
    findSubset(input, output, index+1, ans);

}

int main(){
    string input = "123";
    string output = "";
    int index = 0;
    vector<string>ans;

    findSubset(input, output, index, ans);

    for(auto i : ans){
        cout << i << endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

string iterative1(string &name, int length){

    int st = 0, end = length-1;

    while(st <= end){
        swap(name[st++], name[end--]);
    }

    return name;
}

string recursion(string &name, int st, int end){
    // base case
    if(st > end){
        return name;
    }

    // ek case handle karunga
    if(st <= end){
        swap(name[st], name[end]);
    }

    return recursion(name, st+1, end-1);
}

int main(){

    string name = "Aryan";
    int length = name.length();

    // string ans1 = iterative1(name, length);
    // cout << "From iteartive method : " << ans1 << endl;

    int st = 0, end = length-1;
    string ans2 = recursion(name, st, end);
    cout << "From Recursive method : " << ans2 << endl;

    return 0;
}
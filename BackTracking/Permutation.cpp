#include<iostream>
using namespace std;

void permutation(string str, int i){
    // base case 
    if( i >= str.length()){
        cout << str << endl;
        return;
    }

    // ek case hum solve karenge bake recursion dekh lega
    for(int j=i; j<str.length(); j++){
        swap(str[i], str[j]);
        permutation(str, i+1);
        swap(str[j], str[i]);
    }
}

int main(){
    string str = "abc";
    int i=0;
    permutation(str, i);
    return 0;
}
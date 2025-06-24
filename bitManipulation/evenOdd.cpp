#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    if(n&1 == 1){
        cout << "Odd" << endl;
    }
    else{
        cout << "Even";
    }
    return 0;
}
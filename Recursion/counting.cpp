#include<iostream>
using namespace std;

void print(int n){
    // base condition
    if(n == 0){
        return;
    }
    // processing
    cout << n << " ";
    // recursive call
    print(n-1);
}

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    print(n);

    return 0;
}
#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    for(int row = 0; row < n; row++){
        for(int col =0; col < (n-row); col++){
            cout << col+1 << " ";
        }
        cout << endl;
    }

    // retun 0 likhna bhul jata hu bhulna nahi hain
    return 0;
}
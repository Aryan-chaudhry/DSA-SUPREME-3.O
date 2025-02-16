#include<iostream>
using namespace std;

int main(){
    int n, sum;
    // debug 1
    sum = 0;

    cin >> n;
    int input[n];
    for(int i=0;i<n;i++){
        // debug 2 input[i] instead of input[0]
        cin >> input[i];
    }
     for(int i=0; i<n; i++){
         sum = sum + input[i];
     }
    cout << sum << endl;
    return 0;
}
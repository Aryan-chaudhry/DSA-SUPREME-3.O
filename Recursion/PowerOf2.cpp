#include<iostream>
using namespace std;

int getPower(int n){
    // base condition 
    if(n == 0){
        return 1;
    }
    int chothiProblem = getPower(n-1);
    int badiProblem = 2*chothiProblem;

    return badiProblem;
}

int main(){
    int n;
    cout << "Enter power : ";
    cin >> n;

    int ans = getPower(n);
    cout << ans << endl;

    return 0;
}
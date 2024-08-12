#include<iostream>
using namespace std;

int getSum(int n){
    // base condition
    if(n == 0){
        return 0;
    }

    int chothiProblem = getSum(n-1);
    int badiProblem = n + chothiProblem;

    return badiProblem;
}

int main(){
    int n;
    cout << "Enter the nth sum : ";
    cin >> n;

    int ans =  getSum(n);
    cout << ans << endl;

    return 0;
}
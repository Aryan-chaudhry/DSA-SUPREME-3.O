#include<iostream>
using namespace std;

int getFactorial(int n){
    // base condition
    if(n==0 || n==1){
        return 1;
    }
    int chotiProblem = getFactorial(n-1);
    int badiProblem = n * chotiProblem;

    return badiProblem;
}

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int ans = getFactorial(n);
    cout << "Factorial of " << n << " is : " << ans << endl;

    return 0;
}

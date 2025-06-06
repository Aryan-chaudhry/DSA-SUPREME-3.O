#include<bits/stdc++.h>
using namespace std;

double pow(double x, int n){
    // base case
    if(n == 0) 
        return 1;

    return x*pow(x,n-1);
}

int main(){
    double x;
    int n;

    cout << "Enter x : ";
    cin >> x;

    cout << "Enter n : ";
    cin >> n;

    double ans = pow(x,n);
    cout << "ans : " << ans << endl;

    return 0;
}
#include<iostream>
using namespace std;

int fib(int n){
    // base condition 
    if(n==0 || n==1){
        return n;
    }
    // recursive call
    int ans = fib(n-1) + fib (n-2);
    return ans;
}

int main(){
    int n;
    cout << "enter the nth term : ";
    cin >> n;

    int ans = fib(n);
    cout << ans << endl;

    return 0;
}


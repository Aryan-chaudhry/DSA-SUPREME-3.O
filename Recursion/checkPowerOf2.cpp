#include<bits/stdc++.h>
using namespace std;

bool Solve(int n){
    if(n <= 0) return false;
    if(n == 1) return true;

   while(n > 1){
        int digit = n%2;
        if(digit != 0) return false;
        n /= 2;
        
   }
   return true;
}

bool solve(int n){
    if(n == 1) return true;
    if(n <= 0) return false;
    
    int digit = n%2;
    if(digit != 0) return false;

    return solve(n/2);
}

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    bool ans = Solve(n);
    if(ans){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    // base case
    if(n == 1) return 0;
    if(n == 2) return 1;

    int ans = (n-1) * (solve(n-2) + solve(n-1));
    return ans;
}


int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ans = solve(n);
    cout << "Total number of ways are : " << ans;
    return 0;
}
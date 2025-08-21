#include<bits/stdc++.h>
using namespace std;

int Recursion(int n){
    // base case
    if(n == 0 || n == 1) return n;

    return Recursion(n-1) + Recursion(n-2); 

    // Time Complexity  O(2^n)
    // space complexity O(n);
}

int memoisation(int n, vector<int>&dp){
    // base case
    if(n == 0 || n == 1) return n;

    // if answer already exist than return the answer no need tp calculate again
    if(dp[n] != -1){
        return dp[n];
    }

    // lets store the answer in dp
    dp[n] = memoisation(n-1,dp) + memoisation(n-2,dp);
    return dp[n];

    // Time Complexity O(n);
    // space complexity O(n)
}

int bottomUp(int n){
    // create dp array
    vector<int>dp(n+1, -1);

    // analyse base case in term of dp array
    dp[0] = 0;
    dp[1] = 1;

    // org --> n --> 0
    // in iterative --> 0 --> n, 0,1 case are handle in base case itself

    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n]; // answer hamesah vahi hoga jo recursionb me pass kiya hai

    // time compexity  --> O(n)
    // space compecity --> O(n);

}

int spaceOptimization(int n){
    if(n == 0 || n == 1) return n;

    int prev = 0;
    int curr = 1;

    for(int i=2; i<=n; i++){
        int ans = prev + curr;
        prev = curr;
        curr = ans;
    }
    return curr;

    // time complexity  O(n)
    // space complexity O(1)
}

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    // int ans = Recursion(n);
    // cout << ans << endl;

    // vector<int>dp(n+1, -1);
    // int ans = memoisation(n, dp);
    // cout << ans << endl;

    // int ans = bottomUp(n);
    // cout << ans << endl;

    int ans = spaceOptimization(n);
    cout << ans << endl;

}
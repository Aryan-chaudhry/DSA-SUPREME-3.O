#include<bits/stdc++.h>
using namespace std;

int Recursion(int n, int k){
    // base case
    if(n == 1) return k;
    if(n == 2) return k + (k*(k-1));

    return (k-1)*(Recursion(n-2, k) + Recursion(n-1, k));

    // Time Complexity  O(2^n)
    // Space Complexity O(n) --> because of recursive call stack
}

int Memoisation(int n, int k, vector<vector<int>>&dp){
    // base case
    if(n == 1) return k;
    if(n == 2) return k + (k*(k-1));

    if(dp[n][k] != -1) return dp[n][k];

    return dp[n][k] = (k-1)*(Memoisation(n-2,k,dp) + Memoisation(n-1,k,dp));

    // Time Complexity O(n*k)
    // space Complexity O(n*k + n) --> O(n*k)
}

int Tabulation(int n, int k){
    // create dp vector
    vector<vector<int>>dp(n+1, vector<int>(k+1, 0));

    // analyse base case in term of dp vector
    for(int col=0; col<=k; col++){
        dp[1][col] = k;
    }

    for(int col=0; col<=k; col++){
        dp[2][col] = k+(k*(k-1));
    }

    for(int i=3; i<=n; i++){
        for(int j=1; j<=k; j++){
            dp[i][j] = (k-1)*(dp[i-2][k] + dp[i-1][k]);
        }
    }

    return dp[n][k];
}

int spaceOptimization(int n, int k){

    vector<int>prev1(k+1, 0);  //--> i-1
    vector<int>prev2(k+1, 0); //--> i-2

     // analyse base case in term of dp vector
    for(int col=0; col<=k; col++){
        prev2[col] = k;
    }

    for(int col=0; col<=k; col++){
        prev1[col] = k+(k*(k-1));
    }

    for(int i=3; i<=n; i++){
        vector<int>curr(k+1, 0);
        for(int j=1; j<=k; j++){
            curr[j] = (k-1)*(prev2[k] + prev1[k]);
        }
        // shifting
        prev2 = prev1;
        prev1 = curr;
    }

    return prev1[k];

    // Time Complexity O(n*k)
    // space Complexity O(k)


}

int main(){
    int n = 2;
    int k = 4;  

    // int ans = Recursion(n, k);
    // cout << ans << endl;

    // vector<vector<int>>dp(n+1, vector<int>(k+1, -1));
    // int ans = Memoisation(n, k, dp);
    // cout << ans << endl;

    // int ans = Tabulation(n,k);
    // cout << ans << endl;

    int ans = spaceOptimization(n, k);
    cout << ans << endl;
}
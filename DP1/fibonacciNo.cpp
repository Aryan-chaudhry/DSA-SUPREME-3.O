#include<iostream>
#include<vector>
using namespace std;

int solveUsingDp(int n, vector<int>&dp){
    // base case 
    if(n==0 || n== 1){
        return n;
    }

    // step 3 if any already exist no need to solve again just gove ans from dp
    if(dp[n] != -1){
        // ans already present in a dp so return it
        return dp[n];
    }
    
    // step 2
    dp[n] = solveUsingDp(n-1, dp) + solveUsingDp(n-2, dp);
    return dp[n];

}

int main(){
    int n = 5;

    // 1st step
    vector<int>dp(n+1, -1);

    int ans = solveUsingDp(n, dp);
    cout << ans << endl;
}
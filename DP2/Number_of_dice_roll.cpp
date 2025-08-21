#include<bits/stdc++.h>
using namespace std;

int mod = 1e9+7;

int Recursion(int n, int k, int target){
    // base case

    if(target == 0 && n == 0) return 1;
    if(target != 0 && n == 0) return 0;
    if(target == 0 && n != 0) return 0;
    if( target < 0) return 0;

    // ek case solve karna hai
    int ans = 0;
    for(int i=1; i<=k; i++){
        ans += Recursion(n-1, k, target-i);
    }
    return ans%mod;
}

int Memoisation(int n, int k, int target, vector<vector<long long int>>&dp){
    // base case
    if(target == 0 && n == 0) return 1;
    if(target != 0 && n == 0) return 0;
    if(target == 0 && n != 0) return 0;
    if( target < 0) return 0;

    if(dp[n][target] != -1){
        return dp[n][target];
    }

    long long int ans = 0;
    for(int i=1; i<=k; i++){
        ans += Memoisation(n-1, k, target-i, dp);
    }
    
    return dp[n][target] = ans%mod;
}

int tabulation(int n, int k, int target){
        vector<vector<long long int>>dp(n+1, vector<long long int>(target+1, 0)); // {n,target}
        dp[0][0] = 1;

        for(int row=1; row<=n; row++){
            for(int col=1; col<=target; col++){
                long long int ans = 0;
                for(int i=1; i<=k; i++){
                    if(col-i >= 0)
                        ans = ans%mod + dp[row-1][col-i]%mod;
                }
                dp[row][col] = ans%mod;
            }
        }

        return dp[n][target]%mod;
    }

    int spaceOptimization(int n, int k, int target){
        vector<int>prev(target+1, 0);
        vector<int>curr(target+1, 0);

        prev[0] = 1;

        for(int row=1; row<=n; row++){
                for(int col=1; col<=target; col++){
                    long long int ans = 0;
                    for(int i=1; i<=k; i++){
                        if(col-i >= 0)
                            ans = ans%mod + prev[col-i]%mod;
                    }
                curr[col] = ans%mod;
                }
                // shifiting
                prev = curr;
            }
        return prev[target];
    }

int main(){
    int n = 2, k=6, target=7;

    // int ans = Recursion(n, k, target);
    // cout << ans << endl;
    
    // vector<vector<long long int>>dp(n+1, vector<long long int>(target+1, -1));

    // int ans = Memoisation(n, k, target, dp);
    // cout << ans << endl;
    
    // int ans = tabulation(n, k, target);
    // cout << ans << endl;    

    int ans = spaceOptimization(n, k, target);
    cout << ans << endl;

    return 0;
}
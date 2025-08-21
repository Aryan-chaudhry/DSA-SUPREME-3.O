#include<bits/stdc++.h>
using namespace std;

int Recursion(vector<int>&coins, int amount){
    // base case
    if(amount == 0) return 0;
    if(amount < 0) return INT_MIN;

    int minCoin = INT_MAX;

    for(int i=0; i<coins.size(); i++){
        if(coins[i] <= amount){
            int ans = Recursion(coins, amount-coins[i]);
            if(ans != INT_MAX){
                int coinUsed = 1 + ans;
                minCoin = min(minCoin, coinUsed);
            }
        }
    }
    return minCoin;
}

int Memoisation(vector<int>&coins, int amount, vector<int>&dp){
    // base case
    if(amount == 0) return 0;
    if(amount < 0) return INT_MAX;

    if(dp[amount] != -1) return dp[amount];

    int minCoin = INT_MAX;
    for(int i=0; i<coins.size(); i++){
        if(coins[i] <= amount){
            int ans = Memoisation(coins, amount-coins[i], dp);
            if(ans != INT_MAX){
                int coinUsed = 1 + ans;
                minCoin = min(minCoin, coinUsed);
            }
        }
    }
    return dp[amount] = minCoin;

    // Time Complexity  O(n)
    // space complexity O(2n) --> O(n)

}

int Tabulation(vector<int>&coins, int amount){
    // create dp array
    vector<int>dp(amount+1, -1);

    dp[0] = 0;

    for(int amt=1; amt <= amount; amt++){
        int minCoin = INT_MAX;
        for(int i=0; i<coins.size(); i++){
           if(coins[i] <= amt){
            int ans = dp[amt-coins[i]];
            if(ans != INT_MAX){
                int coinUsed = 1 + ans;
                minCoin = min(minCoin, coinUsed);
            }
        }
    }
    dp[amt] = minCoin;
    }
    return dp[amount];
}


int main(){
    vector<int>coins = {1,2,5};
    int amount = 11;

    // int ans = Recursion(coins, amount);
    // if(ans == INT_MAX){
    //     cout << -1 << endl;
    // }
    // else{
    //     cout << ans << endl;
    // }

    // vector<int>dp(amount+1, -1);
    // int ans = Memoisation(coins, amount, dp);
    // if(ans == INT_MAX){
    //     cout << -1 << endl;
    // }
    // else{
    //     cout << ans << endl;
    // }

    int ans = Tabulation(coins, amount);
    if(ans == INT_MAX){
        cout << -1 << endl;
    }
    else{
        cout << ans << endl;
    }
}
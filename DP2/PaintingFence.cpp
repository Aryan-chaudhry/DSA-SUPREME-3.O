#include<bits/stdc++.h>
using namespace std;

int Recursion(int n, int k){
    if(n == 1){
        return k;
    }
    if(n == 2){
        return (k + (k*(k-1)));
    }

    return (k-1) * ( Recursion(n-1,k) + Recursion(n-2, k));
}

int Memoisation(int n, int k, vector<int>&dp){
    // base case 
    if(n == 1){
        return k;
    }

    if(n == 2){
        return k + (k*(k-1));
    }

    int ans = (k-1) * (Memoisation(n-1, k, dp) + Memoisation(n-2, k, dp));
    return ans;
}

int bottomUp(int n, int k){
    // create dp array
    vector<int>dp(n+1, -1);

    // analyse base case 
    dp[1] = k;
    dp[2] = k + (k*(k-1));

    // check parameter reverse it and copy paste
    for(int i=3; i<=n; i--){
       dp[i] = (k-1) * (dp[i-1] + dp[i-2]);
    }

    return dp[n];
}

int spaceOptimization(int n, int k){

    int prev2 = k;
    int prev1 = k + (k*(k-1));

    if(n == 1){
        return prev2;
    }
    if(n == 2){
        return prev1;
    }

    for(int i=3; i<=n; i++){
        int curr = (k-1) * (prev1 + prev2);

        // shifting
        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;
}
int main(){

    int n = 3, k = 2;

    // int ans1 = Recursion(n,k);
    // cout << ans1 << endl;

    // Memoisation
    // create 1dp dp
    // vector<int>dp(n+1, -1);
    // int ans2 = Memoisation(n, k, dp);
    // cout << ans2 << endl;


    // int ans3 = bottomUp(n, k);
    // cout << ans3 << endl;

    int ans4 = spaceOptimization(n, k);
    cout << ans4 << endl;

    return 0;
}
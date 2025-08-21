#include<bits/stdc++.h>
using namespace std;

int Recursion(vector<int>&house, int index){
    // base case
    if(index >= house.size()){
        return 0;
    }

    int include = house[index] + Recursion(house, index+2);
    int exclude = 0 + Recursion(house, index+1);

    int ans = max(include,exclude);
    return ans;

    // Time Complexity  O(2^n)
    // space Complexity O(n)
}

int Memoisation(vector<int>&house, int index, int n, vector<int>&dp){
    // base case
    if(index >= house.size()) return 0;

    if(dp[index] != -1) return dp[index];

    int include = house[index] + Memoisation(house, index+2, n, dp);
    int exclude = 0 + Memoisation(house, index+1, n, dp);

    return dp[index] = max(include, exclude);

    // Time Complexity  O(n)
    // space Complexity O(2n) --> O(n)
}

int Tablulation(vector<int>&house, int index){
    int n = house.size();
    
    // i have created dp array
    vector<int>dp(n+1, -1);

    // lets analyze the base case in tem of dp
    dp[n] = 0;

    for(int i=n-1; i>=0; i--){
        int include = house[i] + dp[i+2];
        int exclude  = 0+ dp[i+1];
        dp[i] = max(include,exclude);
    }
    
    return dp[0];  
    
    // time complexity  O(n)
    // space complexity O(n)
}

int spaceOptimization(vector<int>&house, int index){
    // base case
    if(index >= house.size()) return 0;

    int next1 = 0;
    int next2 = 0;

    for(int i=house.size()-1; i>=0; i--){
        int include = house[i] + next2;
        int exclude = 0 + next1;
        int curr = max(include, exclude);

        // shifting
        next2 = next1;
        next1 = curr;
    }
    return next1;

    // Time complexity  O(n)
    // space complexity O(1)
}

int main(){
    vector<int>house = {1,2,3,1};
    int index = 0;

    // int ans = Recursion(house, index);
    // cout << ans << endl;

    // int n = house.size();
    // vector<int>dp(n+1, -1);

    // int ans = Memoisation(house, index, n, dp);
    // cout << ans << endl;

    // int ans = Tablulation(house, index);
    // cout << ans << endl;

    int ans = spaceOptimization(house, index);
    cout << ans << endl;
}
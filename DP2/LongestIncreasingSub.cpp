#include<bits/stdc++.h>
using namespace std;

int Recursion(vector<int>&nums, int index, int lastIndex){
    // base case
    if(index >= nums.size()) return 0;

    int include = 0, exclude = 0;
    if(lastIndex == -1 || nums[index] > nums[lastIndex]){
        include = 1 + Recursion(nums, index+1, index);
    }
    exclude = 0 + Recursion(nums, index+1, lastIndex);
    return max(include,exclude);

    // Time Complexity  O(2^n)
    // Space Complexity O(n) 
}

int Memoisation(vector<int>&nums, int index, int lastIndex, vector<vector<int>>&dp){
    // base case
    if(index >= nums.size()) return 0;

    if(dp[index][lastIndex+1] != -1) return dp[index][lastIndex];

    int include = 0;
    if(lastIndex == -1 || nums[index] > nums[lastIndex]){
        include = 1 + Memoisation(nums, index+1, index, dp);
    }
    int exclude = 0 + Memoisation(nums, index+1, lastIndex, dp);

    return dp[index][lastIndex+1] = max(include, exclude);
}


int Tabulation(vector<int>&nums){
    // lets create dp 
    int n = nums.size();

    vector<vector<int>>dp(n+1, vector<int>(n+1, -1)); // index --> row, lastIndex --> col

    // analyse base case  --> if(index >= nums.size()) return 0;
    for(int col=0; col<=n; col++){
        dp[n][col] = 0;
    }

    for(int idx = n-1; idx>=0; idx--){
        for(int ldx = idx-1; ldx>=-1; ldx--){
            int include = 0;
            if(ldx == -1 || nums[idx] > nums[ldx]){
                include = 1 + dp[idx+1][idx+1];  // +1 beauuse it stuck at -1
            }
            int exclude = 0 + dp[idx+1][ldx+1]; // +1 becuase it stuck at -1

            dp[idx][ldx+1] = max(include, exclude);
        }
    }
    return dp[0][0];
}


int main(){
    vector<int>nums = {10,9,2,5,3,7,101,18};
    int index = 0;

    int lastIndex = -1;
    // int ans = Recursion(nums, index, lastIndex);
    // cout << ans << endl;

    // int n = nums.size();
    // vector<vector<int>>dp(n+1, vector<int>(n+2, -1));  // row --> index, col --> lastIndex

    // int ans = Memoisation(nums, index, lastIndex, dp);
    // cout << ans << endl;

    int ans = Tabulation(nums);
    cout << ans << endl;

    return 0;
}
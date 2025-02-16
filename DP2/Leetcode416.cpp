#include<bits/stdc++.h>
using namespace std;

bool recursion(vector<int>&nums, int target, int index){
    // base case 
     if(target < 0 || index >= nums.size()) return false;

     if(target == 0) return true;

     // ek case hum solve karenge 
     // bake recurison sambhal lega

     // pattern --> include or exclude

     int incl = recursion(nums, target-nums[index], index+1);
     int excl = recursion(nums, target, index+1);

     return incl || excl;
}

bool Memoisation(vector<int>&nums, int target, int index, vector<vector<int>>&dp, int n){
    // base case 
     if(target < 0 || index >= nums.size()){
        return false;
     }

     if(target == 0){
        return true;
     }

     if(dp[target][index] != -1){
        return dp[target][index];
     }

     int incl = Memoisation(nums, target-nums[index], index+1, dp, n);
     int excl = Memoisation(nums, target, index+1, dp, n);

     // step 2 store ans in dp array and return it
     dp[target][index] = incl || excl;
     return dp[target][index];
}

bool solve(vector<int>&nums){
    int n = nums.size();

    int sum = accumulate(nums.begin(), nums.end(), 0);

    if(sum&1){
       return false;
    }

    int target = sum>>1;
    int index = 0;

    // bool ans1 = recursion(nums, target, index);
    // return ans1;


    // Memoisation

    // step 1 create dp vector and pass it
    vector<vector<int>>dp(target+1, vector<int>(n+1, -1));

    int ans2 = Memoisation(nums, target, index, dp, n);
    return ans2;
  
}

int main(){
  
  vector<int>nums = {1,5,11,15};

  bool ans = solve(nums);

  if(ans){
    cout << "true" << endl;
  }
  else{
    cout << "false" << endl;
  }

  return 0;
}
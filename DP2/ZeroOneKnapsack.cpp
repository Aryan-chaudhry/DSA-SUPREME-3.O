#include<bits/stdc++.h>
using namespace std;

int Recursion(vector<int>&val, vector<int>&wt, int capacity, int index){
    // base case 
    if(index == 0){
        if(wt[index] <= capacity){
            return val[index];
        }
        else{
            return 0;
        }
    }
    // ek case solve karna hai baake recursion sambhal lega
    // pattern --> include/exclude pattern

    int include = 0;
    if(wt[index] <= capacity){
        include = val[index] + Recursion(val, wt, capacity-wt[index], index-1);
    }
        int exclude = 0 + Recursion(val, wt, capacity, index-1);

    int maxProfit = max(include, exclude);
    
    return maxProfit;
}

int topDown(vector<int>&val, vector<int>&wt, int capacity, int index, vector<vector<int>>dp){
     // base case 
    if(index == 0){
        if(wt[index] <= capacity){
            return val[index];
        }
        else{
            return 0;
        }
    }

    if(dp[capacity][index] != -1){
        return dp[capacity][index];
    }
    // ek case solve karna hai baake recursion sambhal lega
    // pattern --> include/exclude pattern

    int include = 0;
    if(wt[index] <= capacity){
        include = val[index] + topDown(val, wt, capacity-wt[index], index-1, dp);
    }
        int exclude = 0 + topDown(val, wt, capacity, index-1, dp);

    int maxProfit = max(include, exclude);
    // step2 store and return ans in dp array
    dp[capacity][index] = maxProfit;
    return dp[capacity][index];
}

int main(){


    vector<int>val = {1,2,3};
    vector<int>wt = {4,5,6};
    int capacity = 3;

    int index = val.size()-1;

    // int ans = Recursion(val, wt, capacity, index);
    // cout << ans << endl;

    // Top Down Approach
    // find dp array
    // step 1 
    int n = val.size();
    vector<vector<int>>dp(capacity+1, vector<int>(n, -1));
    int ans = topDown(val, wt, capacity, index, dp);
    cout << ans << endl;
    return 0;
}
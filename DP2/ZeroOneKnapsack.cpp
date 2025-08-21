#include<bits/stdc++.h>
using namespace std;

int Recursion(int W, vector<int>&val, vector<int>&Wt, int index){
    // base case
    if(index == 0){
        if(Wt[0] <= W){
            return val[0];
        }
        else{
            return 0;
        }
    }

    int include = 0;
  
    if(Wt[index] <= W){
        include = val[index] + Recursion(W-Wt[index], val, Wt, index-1);
    }
   
    int exclude = 0 + Recursion(W, val, Wt, index-1);
  
    return max(include, exclude);

    // Time complexity  O(2^n)
    // space complexity O(n)

}

int Memoisation(int W, vector<int>&val, vector<int>&Wt, int index, vector<vector<int>>&dp){
    if(index == 0){
        if(Wt[0] <= W){
            return val[0];
        }
        else{
            return 0;
        }
    }

    if(dp[index][W] != -1){
        return dp[index][W];
    }

    int include = 0;
    if(Wt[index] <= W){
        include = val[index] + Memoisation(W-Wt[index], val, Wt, index-1, dp);
    }
    int exclude = 0 + Memoisation(W, val, Wt, index-1, dp);

    return dp[index][W] = max(include, exclude);

    // Time Complexity  O(n*w)
    // space complexity  O(n + n*w)
}

int Tabulation(int W, vector<int>&val, vector<int>&Wt){
    // create dp vector
    int n = val.size();
    vector<vector<int>>dp(n, vector<int>(W+1, -1)); // index --> row, W --> col

    // analyse base case in terms of dp vector
    for(int col=Wt[0]; col<=W; col++){
        if(Wt[0] <= W){
            dp[0][col] = val[0];
        }
        else{
            dp[0][col] = 0;
        }
    }

    for(int i=1; i<n; i++){
        for(int w =0; w<=W; w++){
            int include = 0;
            if(Wt[i] <= w){
                include = val[i] + dp[i-1][w-Wt[i]];
            }
            int exclude = 0 + dp[i-1][w];
            dp[i][w] = max(include, exclude);
        } 
    }

    return dp[n-1][W];

    // Time Complexity  O(n*w)
    // space Complexity  O(n*w) 
}

int spaceOptimization(int W, vector<int>&val, vector<int>&Wt){
    int n = val.size();

    vector<int>prev(W+1, 0);
    vector<int>curr(W+1, 0);

    // lets analyse the base case
    for(int i=Wt[0]; i<= W; i++){
        prev[i] = val[0];
    }

    for(int i=1; i<n; i++){
        for(int w=0; w<=W; w++){

            int include = 0;
            if(Wt[i] <= w){
                include = val[i] + prev[w-Wt[i]];
            }
            int exclude = 0 + prev[w];
            curr[w] = max(include, exclude);
        }
        // shifting is very important
        prev = curr;
    }
    return prev[W];

    // Time Complexity  O(n*w)
    // space Complexity O(w+w) --> O(w)
}

int spaceOptimization2(int W, vector<int>&val, vector<int>&Wt){
    int n = val.size();

    vector<int>prev(W+1, 0);
    // vector<int>curr(W+1, 0);

    // lets analyse the base case
    for(int i=Wt[0]; i<= W; i++){
        prev[i] = val[0];
    }

    for(int i=1; i<n; i++){
        for(int w=0; w<=W; w++){

            int include = 0;
            if(Wt[i] <= w){
                include = val[i] + prev[w-Wt[i]];
            }
            int exclude = 0 + prev[w];
            prev[w] = max(include, exclude);
        }
 
    }
    return prev[W];

    // Time Complexity  O(n*w)
    // space Complexity O(w)
}


int main(){
    int W = 5;
    vector<int>val = {10, 40, 30, 50};
    vector<int>Wt = {5, 4, 2, 3};
    int index = val.size()-1;

    // int ans = Recursion(W, val, Wt, index);
    // cout << ans << endl;
    int n = val.size();

    // vector<vector<int>>dp(n+1, vector<int>(W+1, -1));
    // int ans = Memoisation(W, val, Wt, index, dp);
    // cout << ans << endl;

    // int ans = Tabulation(W, val, Wt);
    // cout << ans << endl;

    // int ans = spaceOptimization(W, val, Wt);
    // cout << ans << endl;

     int ans = spaceOptimization2(W, val, Wt);
    cout << ans << endl;
}

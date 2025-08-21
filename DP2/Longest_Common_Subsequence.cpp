#include<bits/stdc++.h>
using namespace std;

int Recursion(string &text1, int i, string &text2, int j){
    // base case
    if(i >= text1.length()) return 0;
    if(j >= text2.length()) return 0;

    int ans = 0;
    if(text1[i] == text2[j]){
        ans = 1 + Recursion(text1, i+1, text2, j+1);
    }
    else{
        ans = max(Recursion(text1, i+1, text2, j), Recursion(text1, i, text2, j+1));
    }
    return ans;

    // Time Complexity  O(2^n)
    // space Complexity O(n)
}

int Memoisation(string &text1, int i, string &text2, int j, vector<vector<int>>&dp){
    // base case
    if(i >= text1.length()) return 0;
    if(j >= text2.length()) return 0;

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    int ans = 0;
    if(text1[i] == text2[j]){
        ans = 1 + Memoisation(text1, i+1, text2, j+1, dp);
    }
    else{
        ans = max(Memoisation(text1, i+1, text2, j, dp), Memoisation(text1, i, text2, j+1, dp));
    }
    return dp[i][j] = ans;

    // Time Complexity  O(n*m)
    // space complexity O(n*m + n)
}

int Tabulation(string &text1, string&text2){
    int n = text1.length();
    int m = text2.length();

    vector<vector<int>>dp(n+1, vector<int>(m+1, 0));

    for(int i=n-1; i>=0; i--){
        for(int j=m-1; j>=0; j--){
            int ans = 0;
            if(text1[i] == text2[j]){
                ans = 1 + dp[i+1][j+1]; 
            }
            else{
                ans = max(dp[i+1][j], dp[i][j+1]);
            }
            dp[i][j] = ans;
        }
    }
    return dp[0][0];

    // Time Complexity  O(n*m)
    // space Complexiy O(n*m);
}

int spaceOptimization(string &text1, string &text2){
    int n = text1.length();
    int m = text2.length();

    vector<int>prev(m+1, 0);
    vector<int>curr(m+1, 0);

    for(int i=n-1; i>=0; i--){
        for(int j=m-1; j>=0; j--){
            int ans = 0;
            if(text1[i] == text2[j]){
                ans = 1 + prev[j+1]; 
            }
            else{
                ans = max(prev[j], curr[j+1]);
            }
            curr[j] = ans;
        }
        // shifting
        prev = curr;
    }
    return prev[0];

    // Time Complexity  O(n*m)
    // space Compelxity O(m)

}


int main(){
    string text1 = "abcdefgh", text2 = "acegh";

    // int ans = Recursion(text1, 0, text2, 0);
    // cout << ans << endl;

    // vector<vector<int>>dp(text1.length()+1, vector<int>(text2.length()+1, -1)); // {i,j}
    // int ans = Memoisation(text1, 0, text2, 0, dp);
    // cout << ans << endl;

    // int ans = Tabulation(text1, text2);
    // cout << ans << endl;

    int ans = spaceOptimization(text1, text2);
    cout << ans << endl;

    return 0;
}
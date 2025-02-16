#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>&coin, int amount){
    // base case
    if(amount == 0){
        return 0;
    }
    int minCoins = INT16_MAX;
    for(int i=0; i<coin.size(); i++){
        int coinrate = coin[i];
        // agar coinrate chota or equal hoga amoutn se to he amount banega nahi to nahi banega
        if(coinrate <= amount){
            int ans = solve(coin, amount-coinrate);
            if(ans != INT16_MAX){
                int coinUsed = 1 + ans;
                minCoins = min(minCoins, coinUsed);
            }
        }
    }
    return minCoins;
}


int main(){

    vector<int>coin = {1,2,5};
    int amount = 11;
    int ans = solve(coin, amount);
    
    if(ans == INT16_MAX){
        cout << "Minimum coin used to make amount is : " << -1 << endl;
    }
    else{
        cout << "Minimum coin used to make amount is : " << ans << endl;
    }
    

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

static bool comp(vector<int> &a, vector<int> &b){
    return a[1] < b[1]; 
}

int main(){
    vector<vector<int>>nums = { {50, 80},
                                {10, 30},
                                {90, 100},
                                {20, 10},
                                {30, 40}
                                };

   
    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums[i].size(); j++){
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }

    sort(nums.begin(), nums.end(), comp);
    cout << endl;

    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums[i].size(); j++){
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }



}
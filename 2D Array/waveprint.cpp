#include<bits/stdc++.h>
using namespace std;

vector<int> printWave(vector<vector<int>>&nums){

    vector<int>ans;

    for(int col=0; col<nums[0].size(); col++){
        // even col  --> print top to bottom
        if(col % 2 == 0){
            for(int row=0; row<nums.size(); row++){
                ans.push_back(nums[row][col]);
            }
        }
        else{
            for(int row = nums.size()-1; row >=0; row--){
                ans.push_back(nums[row][col]);
            }
        }
    }

    return ans;
}

int main(){
    
    vector<vector<int>>nums =  {{1,2,3,4},
                            {5,6,7,8},
                            {9,10,11,12},
                            };

    vector<int>ans = printWave(nums);
    
    for(auto i : ans){
        cout << i << " ";
    }

}
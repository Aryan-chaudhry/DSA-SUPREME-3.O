#include<iostream>
#include<vector>
using namespace std;

bool solve(vector<int>&nums, int target, int i){
    // base case 
    if(target < 0){
        return false;
    }
    if(i >= nums.size()){
        return false;
    }
    if(target == 0){
        return true;
    }
    // include karo
    bool include = solve(nums, target-nums[i], i+1);
    // exclude karo
    bool exclude = solve(nums, target, i+1);
    // answer
    bool ans = (include||exclude);
    return ans;
}

int main(){
    vector<int>nums= {1,2,11,5};
    
   
    int sum = 0;
    for(int i=0; i<nums.size(); i++){
        sum += nums[i];
    }
    
    if((sum%2) != 0) return false;
    int target = sum/2;
    int index = 0;
    bool ans = solve(nums, target, index);
    cout << ans << endl;

    cout << "hello " << endl;

    return 0;    
}


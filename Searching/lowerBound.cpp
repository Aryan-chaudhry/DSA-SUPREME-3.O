#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>&nums, int target){

    int ans = nums.size()-1;

    int st = 0;
    int end = nums.size()-1;
    int mid = st + (end - st)/2;

    while(st <= end){
        if(nums[mid] >= target){
            ans = mid;
            end= mid - 1;
        }
        else if(nums[mid] < target){
             st = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = st + (end - st)/2;
    }

    return nums[ans];
}

int main(){

    vector<int>nums = {1,2,3,4,5};
    int target = 4;

    int ans = lowerBound(nums, target);
    cout << "Lower Bound of " << target << " is : " << ans << endl;

    return 0;
}
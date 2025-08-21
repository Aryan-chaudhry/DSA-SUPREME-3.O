#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
        int start = 0, end = nums.size()-1 , ans = start; // debug 1 --> make end nums.size() to nums.size()-1
        while(nums[start] >= nums[end]) { // debug 2 --> make > to >= 
            int mid = (start + end) << 1;
            if(nums[mid] <= nums[start] && nums[mid] <= nums[end]) 
                end = mid;
            else if(nums[mid] >= nums[start] && nums[mid] >= nums[end])
                start = mid;          
            else return nums[mid];
            ans = end;
        }
    return nums[ans];
}

int main(){
    vector<int>nums = {4,5,6,1,2,3};
    int ans = findMin(nums);
    cout << ans << endl;
}
#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
        int start = 0, end = nums.size(), ans = start;
        while(nums[start] > nums[end]) {
            int mid = (start + end) >> 1; // << --> >>
            if(nums[mid] <= nums[start] && nums[mid] <= nums[end]) 
                end = mid;
            else if(nums[mid] >= nums[start] && nums[mid] >= nums[end])
                start = mid + 1;    // make start to start+1    
            else return nums[mid];
            ans = start;
        }
        return nums[ans];
}

int main(){
    vector<int>nums = {4,5,6,1,2,3};
    int ans = findMin(nums);
    cout << ans << endl;
}
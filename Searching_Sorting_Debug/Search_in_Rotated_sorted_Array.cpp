#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
		int l = 0, r = nums.size() - 1;
		while(l <= r){
			int mid = l + (r-l)/2;
			if(nums[mid] == target) return mid;
			else if(nums[l]<=nums[mid]){ // debug 1 --> changed > to <
				if(nums[l]<=target && target<=nums[mid]) r = mid-1; // debug 2 --> changed < to <=
				else l = mid+1;
			}
			else{
				if(nums[mid]<=target && target<=nums[r]) l = mid+1; // debug 3 --> changed < to <=
				else r = mid-1;
			}
		}
	return -1; // No need to debug this line.
}

int main(){
    vector<int>nums = {4,5,6,1,2,3};
    int target = 6;

    int ans = search(nums, target);
    cout << ans << endl;
}
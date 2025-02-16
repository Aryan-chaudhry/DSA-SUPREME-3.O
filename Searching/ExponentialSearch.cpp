
#include<bits/stdc++.h>
using namespace std;

int bs(vector<int>&nums, int st, int end, int target){
    
    int mid = st + (end - st)/2;

    while(st <= end){
        if(nums[mid] == target){
            return mid;
        }
        else if(target < nums[mid]){
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
        mid = st + (end - st)/2;
    }
    return -1;
}

int exponentialSearch(vector<int>&nums, vector<int>&searchSpace, int target){

    if(nums[0] == target){
        return 0;
    }

    int index = 1;

    while(index<nums.size() && nums[index] < target){
        index = index*2;
    }


    int track = 0;

    if(index <= nums.size()-1){
        track = index;
    }
    else{
        track = nums.size()-1;
    }

    for(int i=index/2; i<track; i++){
        searchSpace.push_back(nums[i]);
    }

    return bs(nums, index/2, track, target);
}

int main(){
    
    vector<int>nums;
    vector<int>searchSpace;

    for(int i=1; i<=1000; i++){
        nums.push_back(i);
    }

    int target = 500;

    int ans = exponentialSearch(nums, searchSpace, target);
    cout << target << "is Present at Index : " << ans << endl;

    cout << "Search space is : " << endl;

    for(auto i : searchSpace){
        cout << i << " ";
    }


    return 0;
}
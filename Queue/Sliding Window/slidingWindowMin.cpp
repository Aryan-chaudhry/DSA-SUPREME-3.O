#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>&nums, int k){
    deque<int>q;
    vector<int>ans;

    // process teh first window of size k
    for(int i=0; i<k; i++){
        while(!q.empty() && nums[q.back()] > nums[i]){
            q.pop_back();
        }
        q.push_back(i);
    }

    // process the remaining window
    for(int i=k; i<nums.size(); i++){
        // ans
        int index = q.front();
        int element = nums[index];
        ans.push_back(element);

        // removal
        if(i-q.front() >= k){
            q.pop_front();
        }

        // insertion
        while(!q.empty() && nums[q.back()] > nums[i]){
            q.pop_back();
        }
        q.push_back(i);

    }

    // process the last window
    int index = q.front();
    int element = nums[index];
    ans.push_back(element);

    return ans;

}

int main(){
    vector<int>nums = {2,3,4,1,5,4,6};
    int k = 3;

    // ans --> 2, 1, 1, 1, 4

    vector<int>ans = solve(nums, k);
    
    for(auto no : ans){
        cout << no << " ";
    }
}
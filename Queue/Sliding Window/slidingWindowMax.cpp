#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>&nums, int k){

    deque<int>q;
    vector<int>ans;

    // first step --> process the first window

    for(int i=0; i<k; i++){

        while(!q.empty() && nums[q.back()] < nums[i]){
            q.pop_back();
        }

        q.push_back(i);
    }

    // now process the remaining window

    for(int i=k; i<nums.size(); i++){
        // make answer
        int index = q.front();
        int element = nums[index];
        ans.push_back(element);

        // removal

        if(i-q.front() >= k){
            q.pop_front();
        }

        // insertion

        while(!q.empty() && nums[q.back()] < nums[i]){
            q.pop_back();
        }

        q.push_back(i);

    }

    // fetch the answer of last window
    int index = q.front();
    int element = nums[index];
    ans.push_back(element);

    return ans;

}

int main(){
    vector<int>nums = {4,3,2,5,6,8};
    int k = 3;

    // ans --> 4, 5, 6, 8

    vector<int>ans = solve(nums, k);

    for(auto no : ans){
        cout << no << " ";
    }
}
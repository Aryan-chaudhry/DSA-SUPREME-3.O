#include<bits/stdc++.h>
using namespace std;

vector<int> Solve(vector<int>&nums, int k){
    deque<int>q;
    vector<int>ans;

    // step 1 --> process the window of size k
    for(int i=0; i<k; i++){
        if(nums[i] < 0){
            q.push_back(i);
        }
    }

    // step 2 --> process the remaining window

    for(int i=k; i<nums.size(); i++){
        // step a --> store ans
        if(q.empty()){
            // there is no negative element in that window
            ans.push_back(0);
        }
        else{
            // there is negative number present in that window
            int index = q.front();
            int element = nums[index];
            ans.push_back(element);
        }

        // step b --> removal of element who are not in current window
        if(!q.empty() && i-q.front() >= k){
            q.pop_front();
        }

        // step c --> insertion of element
        if(nums[i] < 0){
            q.push_back(i);
        }
    }

    // step 3 --> last window process
    if(q.empty()){
        ans.push_back(0);
    }
    else{
        int index = q.front();
        int element = nums[index];
        ans.push_back(element);
    }

    return ans;
}

int main(){
    vector<int>nums = {-1,2,-3,-4,5,6,8,-10};
    int k = 3;

    vector<int>ans = Solve(nums, k);

    for(auto no : ans){
        cout << no << " ";
    }
}
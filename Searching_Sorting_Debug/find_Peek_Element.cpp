    #include<bits/stdc++.h>
    using namespace std;

    int findPeakElement(vector<int>&nums){
        int n = nums.size();
            int low = 0;
            int high = n-1;
            while(low < high){
                int mid = (low + high) >> 1;
                if(nums[mid] >= nums[mid+1]){
                    high = mid;
                }
                else{
                    low = mid+1; // changed mid to mid + 1
                }
            }
        return low; // return low insteed of mid
    }

    int main(){
        vector<int>nums = {1,2,3,4,5};
        int Peak = findPeakElement(nums);
        cout << Peak << endl;
    }
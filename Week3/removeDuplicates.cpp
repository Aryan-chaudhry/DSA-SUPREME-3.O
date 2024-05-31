#include<iostream>
#include<vector>
using namespace std;

int bruteforce(vector<int>&nums){
    // using two pointer approach
   int i = 1, j = 0;

   while(i<nums.size()){
    if(nums[i] == nums[j]){
        i++;
    }
    else{
        j++;
        nums[j] = nums[i];
        i++;
    }
   }

   // lets print only unique element
//    for(int i=0; i<nums.size(); i++){
//     cout << nums[i] << " ";
//    }

   return j+1;
}



int main(){

    vector<int>nums = {0,0,1,1,1,2,2,3,3,4};
    int ans = bruteforce(nums);
    cout << ans << " (bruteforce)" << endl;

    

}
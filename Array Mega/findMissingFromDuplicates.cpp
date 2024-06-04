#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums = {1,3,5,3,4};
    nums.insert(nums.begin(),750);
    // 750 --> no work  nums = [750,1,3,5,3,4]
    // visiting method
    for(int i=0; i<nums.size(); i++){
        int index = abs(nums[i]);
        if(nums[index] > 0){
            nums[index] *= -1;
        }
    }

    // for(int i=0; i<nums.size(); i++){
    //     cout << nums[i] << " ";
    // }
    int missing = -1;
    for(int i=1; i<nums.size(); i++){
        if(nums[i] > 0){
            missing = i;
            break;
        }
    }
    cout << "Missing no : " << missing << endl;
    return 0;
}
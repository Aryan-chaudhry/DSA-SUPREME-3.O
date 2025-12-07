#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {1,2};

    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums.size(); j++){
            cout << "( " << nums[i] << ", " << nums[j] << " ), ";
        }
    }
}
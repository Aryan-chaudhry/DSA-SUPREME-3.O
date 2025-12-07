#include<bits/stdc++.h>
using namespace std;

/*
       0  1  2
   0   1  2  3
   1   0  3  4
   2   0  0  6


*/

void solve(vector<vector<int>>&nums){

    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums[0].size(); j++){
            if(i > j){
                nums[i][j] = 0;
            }
        }
    }

    cout << endl;
}

int main(){

    vector<vector<int>> nums = {{1,2,3}, {4,5,6}, {7,8,9}};

    cout << "original Matrix" << endl;

    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums[0].size(); j++){
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }

    solve(nums);

    cout << "upper Triangular Matrix" << endl;

    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums[0].size(); j++){
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }


}
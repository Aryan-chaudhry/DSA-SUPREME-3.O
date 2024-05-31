#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int bruteForce(vector<int>&arr){
    // sort the vector
    sort(arr.begin(),arr.end());
    // now find missing
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == i){
            continue;
        }
        else{
            return i;
        }
    }
    return  arr.size();
}

int optimized(vector<int>&arr){
    int ans = 0;
    // step 1 xor all values of array
    for(int i=0; i<arr.size(); i++){
        ans = ans^arr[i];
    }

    // stpe 2 xor all range items [0,N]
    for(int i=0; i<=arr.size(); i++){
        ans = ans^i;
    }

    // return your output
    return ans;
}

int main(){
    vector<int>arr = {9,6,4,2,3,5,7,0,1};
    
    int ans = bruteForce(arr);
    cout << "Missing Number (bruteforce ): " << ans << endl;

    int output = optimized(arr);
    cout << "Missing Number (optimized ) : " << output << endl;


}
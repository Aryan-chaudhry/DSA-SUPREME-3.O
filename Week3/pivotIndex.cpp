#include<iostream>
#include<vector>
using namespace std;

int bruteForce(vector<int>&arr){

    for(int i=0; i<arr.size(); i++){
        int leftsum = 0;
        int rightsum = 0;
        // finding leftsum excluding current index
        for(int j=0; j<i; j++){
            leftsum += arr[j];
        }
        // finding rightsum excluding current index
        for(int j=i+1; j<arr.size(); j++){
            rightsum += arr[j];
        }

        if(leftsum == rightsum){
            return i;
        }
    }
    return -1;
}

int prefixSum(vector<int>&arr){

    vector<int>lsum(arr.size(),0);
    vector<int>rsum(arr.size(),0);
    // calculating leftsum
    for(int i=1; i<arr.size(); i++){
        lsum[i] = lsum[i-1]+arr[i-1];
    }
    // calculating rightsum
    for(int i=arr.size()-2; i>=0; i--){
        rsum[i] = rsum[i+1]+arr[i+1];
    }
    // now check
    for(int i=0; i<arr.size(); i++){
        if(lsum[i] == rsum[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int>arr = {1,7,3,6,5,6};
   int ans = bruteForce(arr);
   
   if(ans != -1){
    cout << "pivot index founded : " << ans << endl;
   }
   else{
    cout << "Not founded any pivot index" << endl;
   }

   int output = prefixSum(arr);
   
   if(output != -1){
    cout << "Pivot index found : " << output << endl;
   }
   else{
    cout << "pivot index not found" << endl;
   }

    return 0;   
}
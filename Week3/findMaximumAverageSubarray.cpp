#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

double bruteforce(vector<int>&nums , int &k ){

    int maxSum = INT_MIN;
    int i=0, j=k-1;

    while(j<nums.size()){
        int sum = 0;
        for(int k=i; k<=j; k++){
            sum += nums[k];
        }
        maxSum = max(maxSum , sum);
        i++;
        j++;
    }
    double maxAverage = maxSum/(double)k;
    return maxAverage;
}

double slidingWindow(vector<int>&nums , int &k){
   
    int i=0, j=k-1;
    int sum = 0;
    for(int k=i; k<=j; k++){
        sum += nums[k];
    }
    int maxSum = sum;
    j++;
    while(j<nums.size()){
        sum -= nums[i++];
        sum += nums[j++];
        maxSum = max(maxSum , sum);
    }
    double maxAverage = maxSum / (double)k;
    return maxAverage;
}
int main(){

    vector<int>nums = {1,12,-5,-6,50,3};
    int k = 4;
    
    // double maxAverage = bruteforce(nums , k);
    // cout << maxAverage << endl;

     double maxAverage = slidingWindow(nums , k);;
     cout << maxAverage << endl;


 
    return 0;
}


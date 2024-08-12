#include<iostream>
using namespace std;

int solve(int arr[], int size, int index){
    // base case 
     if(index >= size){
        return 0;
     }
     // include
     int includeCoin = arr[index] + solve(arr, size, index+2);
     int excludeCoin = 0 + solve(arr, size, index+1);

     int maxCoin = max(includeCoin, excludeCoin);
     return maxCoin;
}

int main(){

    int arr[] = {2,3,7,9,1};
    int size = 5;
    int index = 0;
    int ans =  solve(arr, size, index);
    cout << ans;
}
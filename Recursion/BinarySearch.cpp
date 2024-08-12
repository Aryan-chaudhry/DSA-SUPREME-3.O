#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int target, int st, int end){
    // base case
    if(st > end){
        return -1;
    }
    // ek case mera
    int mid = st + (end - st)/2;
    if(arr[mid] == target){
        return mid;
    }
    // baki recursion sambhal lega
    else if(target > arr[mid]){
        
        return BinarySearch(arr, size, target, mid+1, end);
    }
    else{
        
        return BinarySearch(arr, size, target, st, mid-1);
    }


}

int main(){

    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int target = 30;
    int st = 0;
    int end = size-1;

    int ans = BinarySearch(arr, size, target, st, end);
    cout << ans << endl;

    return 0;
}
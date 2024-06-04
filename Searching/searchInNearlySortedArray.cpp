#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int st = 0;
    int end = size - 1;
    int mid = st + (end - st)/2;

    while(st<end){
        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid-1] == target){
            return mid - 1;
        }
        if(arr[mid+1] == target){
            return mid + 1;
        }
        if(target > arr[mid]){
            st = mid + 2;
        }
        else{
            end = mid - 2;
        }
        mid = st + (end - st)/2;  
    }
    return -1;
}

int main(){
    int arr[] = {10,3,40,20,50,80,70};
    int size = 7;

    int target = -100;
    
    int ans = binarySearch(arr, size, target);
    if(ans != -1){
        cout << "Target found at : " << ans << endl; 
    }
    else{
        cout << "Target not found " << endl;
    }
    return 0;
}

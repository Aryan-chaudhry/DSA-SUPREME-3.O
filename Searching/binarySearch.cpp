#include<iostream>
using namespace std;

int binarySearch(int arr[] , int size , int target){
    
    int st = 0, end = size - 1;
    int mid = st+(end - st)/2;

    while(st <= end){
        // 1 condition
        if(arr[mid] == target){
            return mid;
            break;
        }
        // 2 condition
        else if( target < arr[mid]){
            end = mid - 1;
        }
        // 3 condition
        else{
            st = mid + 1;
        }
        // update mid
        mid = st + (end - st)/2;
       
    }
    // yaha pouch gya to target nahi mila  to return -1 
    return -1;
}

int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int size = 10;
    int target = 90;

    int ans = binarySearch(arr, size, target );
    cout << ans << endl;
    return 0;
}
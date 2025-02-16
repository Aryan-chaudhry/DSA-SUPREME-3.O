#include<iostream>
using namespace std;

int findMin(int arr[], int size){

    int index = 0;

    int st = 0;
    int end = size-1;
    int mid = st + (end - st)/2;

    while(st <= end){
        // minium ya to line A par hai ya line B par
        if(arr[mid] > arr[]){
            st = mid+1;
        }
        else{
            index = mid;
            end = mid - 1;
        }
        mid = st + (end - st)/2;
    }
    return index;  
}

int main(){

    int arr[] = {10,12,14,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    int minimum = findMin(arr, size);
    cout << "Minimum element is : " << minimum << endl;

    return 0;
}
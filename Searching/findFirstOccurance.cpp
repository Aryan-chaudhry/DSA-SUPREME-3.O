#include<iostream>
using namespace std;

void firstOccurance(int arr[], int size, int target, int &firstIndex){
    int st = 0;
    int end = size-1;
    int mid = st + (end-st)/2;

    while(st <= end){
        if(arr[mid] == target){
            // use store and compute technique
            // store the ans
            firstIndex = mid;
            // ans is stored now compute
            // but ans may be first occurance or may not be 
            // so we have to go towards first occurace
            // array sorted hain to first Occurance left me milegi
            end = mid - 1;
        }
        else if (target > arr[mid]){
            st = mid + 1;
        }
        else{
            end = mid - 1;
        }
        // now update mid
        mid = st + (end - st)/2;
    }

}

int main(){
    int arr[] = {20,20,20,20,20,20,10,30,15,60};
    int size = 10;
    int target = 20;
    int firstIndex = -1;
    
    firstOccurance(arr, size, target, firstIndex);
    cout << "First Occurance of " << target << " is : " << firstIndex << endl;

    return 0;
}
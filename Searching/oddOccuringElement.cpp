#include<iostream>
using namespace std;

int findOddOccuring(int arr[], int size){
    int st = 0;
    int end = size - 1;
    int mid = st + (end - st)/2;

    while(st <= end){
        // single element
        if(st == end){
            return st;
        }
        // duplicate does not exist
        if(mid - 1>= 0 && mid + 1 < size && (arr[mid] != arr[mid - 1]) && (arr[mid] != arr[mid+1])){
            return mid;
        }
        // duplicate exist in left index
        if(mid - 1 >= 0 && arr[mid] == arr[mid-1] ){
            int pairStartingIndex = mid-1;
            if(pairStartingIndex & 1){
                // pair starting index is odd
                // i am standing at right part
                // move to left
                end = mid - 1;
            }
            else{
                // pair starting index is even 
                // i am standing at left part
                // move to right 
                st = mid + 1;
            }
        }
        // duplicate exist in right index
        else if(arr[mid] == arr[mid+1] && mid + 1 < size){
            int pairStartigIndex = mid;
            if(pairStartigIndex & 1){
                // pair starting index is odd
                // i am standing at right part
                // move to left
                end = mid - 1;
            }
            else{
                // pair starting index is even 
                // i am standing at left part
                // move to right
                st = mid + 1;
            }
        }
            mid = st + (end - st)/2;
    }
    return -1;
}

int main(){
    int arr[] = {1,2,2,3,3};
    int size = 3;
    // find odd occurring element
    int ans = findOddOccuring(arr, size);
    cout << "ans Index: " << ans << endl;
    cout << "ans Element " << "arr[" << ans << "] : " << arr[ans] << endl;
    return 0;
}
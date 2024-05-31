#include<iostream>
using namespace std;

void lastOccurance(int arr[], int size, int target, int &lastindex){
    int st = 0;
    int end = size-1;
    int mid = st + (end - st)/2;

    while(st <= end){
        if(arr[mid] == target){
            // use store and compute technique
            // store kiya
            lastindex = mid;
            // compute karo
            st = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
        // update mid  esko mat bhulo
        mid = st + (end - st)/2;
    }

}

int main(){
    int arr[] = {20,20,20,20,20,20,10,30,15,60};
    int size = 10;
    int target = 20;
    int lastindex = -1;

    lastOccurance(arr, size, target, lastindex);
    cout << "Last occurance of " << target << " is at : " << lastindex << endl;

    return 0;
}
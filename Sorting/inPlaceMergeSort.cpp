#include<bits/stdc++.h>
using namespace std;

void mergeInPlace(vector<int>&arr, int st, int end, int mid){
    int total_length = end-st+1;
    int gap = total_length/2 + total_length%2; // ceil

    while(gap > 0){
        int i = st;
        int j = st + gap;
        while(j<=end){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
            i++;
            j++;
        }
        gap = gap <= 1 ? 0 : (gap/2) + (gap%2); // ceil
    }
}

void mergeSort(vector<int>&arr, int st, int end){
    if(st >= end){
        return;
    }
    int mid = st + (end - st)/2;
    mergeSort(arr, st, mid);
    mergeSort(arr, mid+1, end);
    mergeInPlace(arr, st, end, mid);
}

// gap method
int main(){
    vector<int>arr = {5,2,3,6,1,8,3};
    int st = 0;
    int end = arr.size()-1;
    mergeSort(arr, st, end);
    
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
}
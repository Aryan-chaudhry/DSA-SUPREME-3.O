#include<iostream>
using namespace std;

void quicksort(int arr[], int st, int end){
    // base case
    if(st >= end){
        return;
    }

    // processing
    int i = st - 1;
    int j = st;
    int pivot = end;

    while(j < pivot){
        if(arr[j] < arr[pivot]){
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i], arr[pivot]);

    quicksort(arr, st, i-1);
    quicksort(arr, i+1, end);
}
int main(){
    int arr[] = {5,2,6,3,8,1,6,3,8,2,4,7,9};
    int size = 15;
    int st = 0;
    int end = size-1;

    quicksort(arr, st, end);

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
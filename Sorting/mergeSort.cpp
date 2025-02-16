#include<iostream>
using namespace std;

void Merge(int arr[], int st, int end, int mid){
    
    int leftlength = mid - st + 1;
    int rightlength = end - mid;

    int *leftarr = new int[leftlength];
    int *rightarr = new int[rightlength];

    int index = st;

    for(int i=0; i<leftlength; i++){
        leftarr[i] = arr[index++];
    }
    for(int i=0; i<rightlength; i++){
        rightarr[i] = arr[index++];
    }

    int i=0;
    int j=0;
    int mainindex = st;
     
     while(i < leftlength && j < rightlength ){
        if(leftarr[i] <= rightarr[j]){
            arr[mainindex] = leftarr[i];
            mainindex++;
            i++;
        }
        else{
            arr[mainindex] = rightarr[j];
            mainindex++;
            j++;
        }
        
     }

    while(i < leftlength){
        arr[mainindex] = leftarr[i];
        mainindex++;
        i++;
    }

    while(j < rightlength){
        arr[mainindex] = rightarr[j];
        mainindex++;
        j++;
    }

    delete[] leftarr;
    delete[] rightarr;
}
void mergeSort(int arr[], int st, int end){

    if(st >= end){
        return;
    }
    int mid = st + (end - st)/2;

    // left part
    mergeSort(arr, st, mid);

    // right part
    mergeSort(arr, mid+1, end);

    // merge 
    Merge(arr, st, end, mid);
}
int main(){
    int size = 15;
    int arr[] = {10, 15, 12, 5, 7, 4, 43, 21, 32, 5, 32, 5, 7, 67, 3};

    
    int st = 0, end = size -1;
    mergeSort(arr, st, end);

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}
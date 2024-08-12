#include<iostream>
using namespace std;

void insertionSort(int arr[], int size){

    for(int i=1; i<size; i++){
        int key = arr[i];
        int j= i-1;

        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int size = 8;
    int arr[size] = {10, 5, 20, 15, 6, 50, 32, 80};

    insertionSort(arr, size);
    return 0;
}
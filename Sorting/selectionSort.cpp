#include<iostream>
using namespace std;

void selectionSort(int arr[], int size){

    for(int itr = 0; itr<size-1; itr++){
        int minIndex = itr;
        for(int i=itr+1; i<size; i++){
            if(arr[i] < arr[minIndex]){
                minIndex = i;
            }
        }

        swap(arr[itr], arr[minIndex]);
    }

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}



int main(){
    int size = 5;
    int arr[] = {4,1,3,7,9};

    selectionSort(arr, size);

    return 0;
}
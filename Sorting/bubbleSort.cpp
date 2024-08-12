#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){

    for(int itr=0; itr<size-1; itr++){
        for(int i=0; i<size-itr-1; i++)
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    
    int size = 5;
    int arr[size] = {5,4,3,2,1};

    bubbleSort(arr, size);

   

    return 0;
}
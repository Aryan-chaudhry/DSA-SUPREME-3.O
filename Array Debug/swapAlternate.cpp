#include<iostream>
using namespace std;

void swapAlternate(int arr[],int size){
    // debug 1 --> i<size not i<size-1
    for(int i=0;i<size;i=i+2){
        int temp = arr[i];
        // debug 2 --> arr[i+1] = arr[i] is replace by arr[i] = arr[i+1]
        arr[i] = arr[i+1];
        // debug 3 --> arr[i] = temp is replace by arr[i+1] = temp
        arr[i+1] = temp;
    }
}

int main(){
    int size = 6;
    int arr[] = {9, 3, 6, 12, 4, 32};
    swapAlternate(arr, size);
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
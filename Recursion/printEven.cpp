#include<iostream>
using namespace std;

void printEven(int arr[], int size, int index){
    // base case
    if(index >= size){
        return;
    }
    // recursive call
    // ek case me solve karunga
    if(!(arr[index]&1)){
        cout << arr[index] << " ";
    }
    // ab recursion tum sambhalo
    printEven(arr, size, index+1);
}

int main(){
    int arr[] = {0,1,2,3,4,5};
    int size = 6;
    int index = 0;

    printEven(arr, size, index);
    return 0;
}
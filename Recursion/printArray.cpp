#include<iostream>
using namespace std;

void printArray(int arr[], int size, int index){
    // base condition
    if(index >= size){
        return;
    }
    // processing
    // ek case me solve karunga bake recursion sambhal lega
    cout << arr[index] << " ";
    // recursive call
    printArray(arr, size, index+1);

}

int main(){

    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int index = 0;

    printArray(arr, size, index);

    return 0;
}
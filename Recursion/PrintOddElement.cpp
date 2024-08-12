#include<iostream>
using namespace std;

void printOdd(int arr[], int size, int index){
    // base case 
     if(index >= size){
        return;
     }
     // ek case me solve karunga
     if(arr[index]&1){
        cout << arr[index] << " ";
     }
     // ab recursion tu sambhal le
     printOdd(arr, size, index+1);
}

int main(){
    int arr[] = {0,1,2,3,4,5};
    int size = 6;
    int index = 0;

    printOdd(arr, size, index);
    return 0;
}
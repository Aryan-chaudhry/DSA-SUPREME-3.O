#include<iostream>
using namespace std;

void printAllPairs(int arr[] , int size){

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cout << arr[i] << ", " << arr[j] << endl;
        }
    }
}

int main(){

    int arr[] = {10,20,30,40,50};
    int size = 5;
    printAllPairs(arr , size);

    return 0;
}
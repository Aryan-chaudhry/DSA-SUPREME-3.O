#include<iostream>
using namespace std;

void populate(int arr[],int n){
    int j=0;
    for(int i=0; i < n; i = i + 2){
        // debug replace arr[n-j] to arr[n-j-1]
        arr[n-j-1] = i+2;
        arr[j] = i+1;
        j++;
    }


    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n = 6;
    int arr[n];
    populate(arr, n);
}
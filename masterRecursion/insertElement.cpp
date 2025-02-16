#include<iostream>
using namespace std;

void insert(int arr[], int &size, int i){
    // base case 
    if(i == size){
        return;
    }
    // ek case me solve karunga 
    cin >> arr[i];
    // bake recursion dekhlega
    insert(arr, size, i+1);
}

int main(){
    int size;
    cin >> size;

    int arr[size];
    int i=0; 
    insert(arr, size, i);

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}
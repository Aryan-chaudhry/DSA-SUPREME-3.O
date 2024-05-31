#include<iostream>
using namespace std;

void reverse(int arr[] , int size){

    int left = 0;
    int right = size-1;

    while(left <= right){
        swap(arr[left] , arr[right]);
        left++;
        right--;
    }


}

void print(int arr[] , int size){

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    
    print(arr ,size);
    reverse(arr , size);
    print(arr , size);

    return 0;
}
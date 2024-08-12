#include<iostream>
using namespace std;

void rotateArray(int arr[] , int size , int d){
     
     d = d%size;

     if(d == 0){
        return;
     }

     // step 1 copy last n elements which have to be shift
     int temp[100];
     int index = 0;

     for(int i=size-d; i<size;i++){
        temp[index] = arr[i];
        index++;
     }

     // step 2 shift all elements by d place 
     for(int i = size-1; i>=0; i--){
        if( i-d >= 0){
            arr[i] = arr[i-d];
        }
     }

     // step 3 copy temp array into original array
     for(int i=0; i<d; i++){
        arr[i] = temp[i];
       
     }
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int d = 6;

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    
    rotateArray(arr , size , d);

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}
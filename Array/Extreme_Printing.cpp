#include<iostream>
using namespace std;

void extremePrinting(int arr[] , int size){

    int left = 0;
    int right = size-1;

    while(left <= right){
        if(left == right){
            // print only one time 
            cout << arr[left] << " ";
            break;
        }
        else{
        cout << arr[left] << " ";
        left++;
        cout << arr[right] << " ";
        right--;
        }
    }
}

int main(){

    int arr[] = {10,20,30,40,50};
    int size = 5;
    
   
    // int size;
    // cout << "Enter size of an Array : ";
    // cin >> size;

    // int arr[size];

    // for(int i=0; i<size; i++){
    //     cout << "Enter the Element at Index " << i << " : ";
    //     cin >> arr[i];
    // }

    // for(int i=0; i<size; i++){
    //     cout << arr[i] << " ";
    // }

    cout << endl << "Extreme Printing " << endl;

    extremePrinting(arr , size);

    return 0; 
}
#include<iostream>
using namespace std;

// int findSingle(int arr[] , int size){
//     int ans = 0;

//     for(int i=0; i<size; i++){
//         ans = ans^arr[i];
//     }

//     return ans;

//     // time complexity O(n)
//     // space complexity O(1)

// }

int findSingle(int arr[] , int size){

    int element = 0;
    
    for(int i=0; i<size; i++){

        element = arr[i];
        int count = 0;

        for(int j=0; j<size; j++){

            if( arr[j] == element ){
                count++;
            }
        }

        if(count == 1){
            break;
        }
    }
    return element;

    // time complexity O(n^2)
    // Space Complexity O(1)
}

int main(){

    int arr[] = {2,2,5,3,3};
    int size = 5;

    int Number = findSingle(arr , size);
    cout << "Single Number is : " << Number << endl;

    return 0;
}
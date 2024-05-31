#include<iostream>
#include<algorithm>
using namespace std;

void sort(int arr[] , int size){
    sort(arr , arr + size);
}

// void sort(int arr[] , int size){
//     int zerocount = 0;
//     int onecount = 0;

//     for(int i=0; i<size; i++){
//         if(arr[i] == 0){
//             zerocount++;
//         }
//         if(arr[i] == 1){
//             onecount++;
//         }
//     }

//     fill(arr, arr+zerocount, 0);
//     fill(arr+zerocount , arr+size , 1);

//     // int i=0;
//     // for(; i<zerocount; i++){
//     //     arr[i] = 0;
//     // }
//     // for(; i<size; i++){
//     //     arr[i] = 1;
//     // }

    // time complexity O(n)
    // space complexity O(1)
// }

void print(int arr[] , int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[] = {0,1,1,0,0,1,1,0};
    int size = 8;

    sort(arr , size);
    print(arr , size);

    return 0;
}
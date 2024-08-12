#include<iostream>
#include<algorithm>
using namespace std;

void bruteForce(int arr[], int size){
    // sort karo 
    sort(arr, arr+size-1);

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    // time complexity O(nlogn)
    // space complexity O(1);
}

void optimized(int arr[], int size){
    int zerocount = 0, onecount = 0, twocount = 0;

    for(int i=0; i<size; i++){
        if(arr[i] == 0){
            zerocount++;
        }
        else if(arr[i] == 1){
            onecount++;
        }
        else{
            twocount++;
        }
    }

    fill(arr, arr+zerocount, 0);
    fill(arr+zerocount, arr+(zerocount + onecount), 1);
    fill(arr+(zerocount+ onecount), arr+size, 2);

    // time complexity O(n)
    // space complexity O(1) 

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

void optimized2(int arr[], int size){
    
   int track = 0;
    for(int i=0; i<size; i++){
        if(arr[i] == 0){
            swap(arr[i], arr[track]);
            track++;
        }
    }
    for(int i=0; i<size; i++){
        if(arr[i] == 1){
            swap(arr[i], arr[track]);
            track++;
        }
    }
    for(int i=0; i<size; i++){
        if(arr[i] == 2){
            swap(arr[i], arr[track]);
            track++;
        }
    }

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    // time complexity O(n)
    // space complexity O(1)
}

int main(){
    int arr[] = {1,2,0,2,1,0,0,1,2};
    int size = 9;

    //bruteForce(arr, size);
    cout << endl;
    //optimized(arr, size);
    cout << endl;
    optimized2(arr, size);

}

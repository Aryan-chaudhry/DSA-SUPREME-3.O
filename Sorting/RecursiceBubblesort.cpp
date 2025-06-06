#include<bits/stdc++.h>
using namespace std;

void letSort(vector<int>&arr, int i, int size){
    // base case
    if(i >= size) return;

    for(int j=0; j<size-i-1; j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }

    letSort(arr, i+1, size);
}

void sortMe(vector<int>&arr){
    int i=0;
    int size = arr.size();

    letSort(arr, i, size);

}

int main(){
    vector<int>arr = {3,2,4,1,5,3,6,4};

    sortMe(arr);

    for(auto no : arr){
        cout << no << " ";
    }
    return 0;
}
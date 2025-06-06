#include<bits/stdc++.h>
using namespace std;

void letSort(vector<int>&arr, int i, int size){
    // base case
    if(i >= size) return;

    // main logoc 
    // i solve only one case rest all cases is handle by recursion itself

    int key = arr[i];
    int j= i-1;

    while(j >=0 && arr[j] > key){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = key;

    letSort(arr, i+1, size);
}

void sortMe(vector<int>&arr){
    int i=1; // considering first element is always sorted;
    int size = arr.size();
    letSort(arr, i, size);
}

int main(){
    vector<int>arr = {6,1,5,2,4,3};
    sortMe(arr);
    for(auto no : arr){
        cout << no << " ";
    }
    return 0;
}
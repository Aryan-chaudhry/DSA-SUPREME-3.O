#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[], int size1, int arr2[], int size2, vector<int>&ans){
    int i = 0, j=0;

    while(i<size1 && j<size2){
        if(arr1[i] < arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else{
            ans.push_back(arr2[j]);
            j++;
        }
    }

    while(i < size1){
        ans.push_back(arr1[i]);
        i++;
    }

    while(j < size2){
        ans.push_back(arr2[j]);
        j++;
    }
}
int main(){

    int arr1[] = {10, 30, 50, 70};
    int size1 = 4;

    int arr2[] = {20, 40, 60, 80, 90, 100};
    int size2 = 6;

    vector<int>ans;

    merge(arr1, size1, arr2, size2, ans);

    for(auto nums : ans){
        cout << nums << " ";
    }
}
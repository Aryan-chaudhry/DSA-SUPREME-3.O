#include<iostream>
using namespace std;

void minInArray(int arr[], int size, int index, int &ans){
    // base case  
    if(index >= size){
        return;
    }
    // recursive call
    // ek case me solve karunga
    ans = min(ans, arr[index]);
    // ab recursion tum sambhalo
    minInArray(arr, size, index+1, ans);
}

int main(){
    int arr[] = {100, 20, 30, 40, 50};
    int size = 5;
    int index = 0;
    int ans = INT8_MAX;

    minInArray(arr, size, index, ans);
    cout << "Minimum element in an Array is : " << ans << endl;
}
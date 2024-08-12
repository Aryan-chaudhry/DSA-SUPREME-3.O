#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target, int index){
    
    // base case 
    if(target == arr[index] && index<=size-1){
        return index;
    }
    if(target >= size){
        return -1;
    }
    // recursive relation
    int ans = linearSearch(arr, size, target, index+1);
    return ans;
}

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int target = 540;
    int index = 0;

    int ans = linearSearch(arr, size, target, index);
    cout << ans << endl;
    return 0;
}
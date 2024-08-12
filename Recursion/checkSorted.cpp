#include<iostream>
using namespace std;

bool checkSorted(int arr[], int size, int index){
    // base case 
    if(index == size-1){
        return true;
    }
    if(arr[index] > arr[index+1] && index+1 < size){
        return false;
    }
    if(arr[index] <= arr[index+1] && index+1 == size-1){
        return true;
    }
    bool ans = checkSorted(arr, size, index+1);
    return ans;
}

int main(){
    int arr[] = {90, 80, 70, 60, 50};
    int size = 5;
    int index = 0;

    int ans = checkSorted(arr, size, index);
    if(ans == true){
        cout << "Sorted" << endl;
    }
    else{
        cout << "Unsorted" << endl;
    }

    return 0;
}
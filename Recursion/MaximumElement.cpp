#include<iostream>
using namespace std;

void maxInArray(int arr[], int size, int index, int &ans){
    // base case 
    if(index == size){
        return;
    }
    // recursive relation
    // ek case mera 
    ans = max(ans, arr[index]);
    // bake sab tera
    maxInArray(arr, size, index+1, ans);
    // processing
}

int main(){
    int arr[] = {10, 20, 30, 40, 800000};
    int size = 5;
    int index = 0;
    int ans = INT8_MIN;

    maxInArray(arr, size, index, ans);
    cout << "Maximum Element in Array : " << ans << endl;

    return 0;
}

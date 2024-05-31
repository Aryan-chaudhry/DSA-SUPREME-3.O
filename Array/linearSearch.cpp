#include<iostream>
using namespace std;

bool linearSearch(int arr[] , int size , int target){

    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}

int main(){

    int arr[] = {10,20,30,40,50};
    int size = 5;
    int target = 90;

    bool ans = linearSearch(arr , size , target);
    cout << "ans : " << ans << endl;

    return 0;
}
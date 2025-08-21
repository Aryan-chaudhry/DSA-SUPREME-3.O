#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int index;
    cin >> index;

    
    for(int i=10; i>=index; i--){
        arr[i] = arr[i-1];
    }

    arr[index] = 50;

    for(int i=0; i<11; i++){
        cout << arr[i] << " ";
    }
    
}
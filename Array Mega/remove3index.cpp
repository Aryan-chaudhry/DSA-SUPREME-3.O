#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int index;

    cout << "Enter index : ";
    cin >> index;

    for(int i=index; i<10; i++){
        arr[i] = arr[i+1];
    }
    

    for(int i=0; i<10-1; i++){
        cout << arr[i] << " ";
    }

}
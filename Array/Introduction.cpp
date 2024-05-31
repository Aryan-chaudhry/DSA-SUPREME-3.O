#include<iostream>
using namespace std;

void print(int arr[] , int n){

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

void solve(int arr[], int n ){
    
    for(int i=0;i<n;i++){
        arr[i] = arr[i]*10;
    }
}

int main(){

    int arr[5] = {10,20,30,40,50};

    print(arr, 5);
    cout << endl;
    solve(arr, 5);
    cout << endl;
    print(arr, 5);
    // creation
    // int arr[4];
    // error
    // int brr[];
    // int crr[] = {1,2,3,4,5};
    // int drr[4]={0};
    // cout << drr[0] << endl;
    // cout << crr[0] << endl;
    // cout << crr[1] << endl;
    // cout << crr[5] << endl;

    // fill(arr,arr+4,23);

    // cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << endl;

    // takking input;
    // int marks[4];

    // for(int i=0;i<4;i++){
    //     cout << "Enter the value of index " << i << " : ";
    //     cin >> marks[i];
    // }

    //  takking output

    // for(int i=0; i<4; i++){
    //     cout << i[marks] << " ";
    // }

    //  cout << sizeof(marks);

    return 0;
}
// missing return statement in linearSearch function and half code is not written

// debug2  --> missing header file and namespace
#include<bits/stdc++.h>
using namespace std;


// debug 3 -->  return type is int not void(given) so make void to int
int linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            // debug 4  --> return index  not leave empty
            return i;
        }
    }

    // debug 5 --> make sure the to return -1 if target not found
    return -1;
}

// debug1  --> missing

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    int index = linearSearch(arr,n,5);
    if(index != -1){
        cout << "Element found at index " << index << endl;
    }
    else{
        cout << "Element not found" << endl;
    }
    return 0;
}
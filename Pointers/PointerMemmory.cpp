#include<iostream>
using namespace std;

int main(){
    // creating integer using stack memmory
    // int a = 5;
    // cout << "Using Stack Memmory : " << a << endl;
    // // creating integer using heap memmory
    // int*ptr = new int; // it give adrress so store in pointer
    // *ptr = 5;
    // cout << "Using Heap Memmory : " << *ptr << endl;

    // // now dealocate or delete 
    // delete ptr;

    // array using stack memmory
    int arr[] = {1,2,3,4,5};
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl;
    // array using heap memmory or dynamic memmory
    int *brr = new int[5];
    //    cout << brr[0] << " " << brr[1] << " " << brr[2] << " " << brr[3] << " " << brr[4] << endl;

}
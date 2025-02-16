#include<iostream>
using namespace std;

int main(){

    int a = 5;
    cout << "a : " << a << endl;
    cout << "Adress of a : " << &a << endl;

    int *ptr = &a;
    cout << "ptr : " << ptr << endl;
    // value store at that address
    cout << *ptr << endl;   //  *x  --> dereferece opertaor


    cout << sizeof(ptr) << endl;

    cout << "ptr : " << ptr << endl;
    cout << "ptr : " << ptr + 1 << endl;
   
}

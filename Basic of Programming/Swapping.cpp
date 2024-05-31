#include<iostream>
using namespace std;

void swappin_Using_Temp(int a ,int b){
    int temp =0;

    temp = a;
    a = b;
    b = temp;

     cout << "a : " << a << " b : " << b << endl;
}
 void swapping_using_swap(int a , int b){
    swap(a,b);

     cout << "a : " << a << " b : " << b << endl;
 }
 void swapping_using_Add_Sub(int a , int b){
    
    a = a+b; // a = 30
    b = a-b; // b = 10
    a = a-b;

     cout << "a : " << a << " b : " << b << endl;
 }
 void swapping_using_xor(int a , int b){
    a = a^b;
    b = a^b;
    a = a^b;

     cout << "a : " << a << " b : " << b << endl;

 }

int main(){
    int a = 15;
    int b= 25;

    swappin_Using_Temp(a , b);
    swapping_using_swap(a , b);
    swapping_using_Add_Sub(a ,b);
    swapping_using_xor(a ,b);



    return 0;
}
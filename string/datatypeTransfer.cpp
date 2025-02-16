#include<iostream>
using namespace std;

int main(){
    
    // integer to character
    int num1 = 1;
    char ch1 =  num1 + '0';
    

    cout << "num1 : " << num1 << " size of num1 : " << sizeof(num1) << endl;
    cout <<  "ch1 : " << ch1 << " size of ch1 : " << sizeof(ch1) << endl;

    // char to integer
    char ch2 = '5';
    int num2 = ch2-'0';
    
    cout << "ch2 : " << ch2 << " size of ch2 : " << sizeof(ch2) << endl;
    cout << "num2 : " << num2 << " size of num2 : " << sizeof(num2) << endl; 


}
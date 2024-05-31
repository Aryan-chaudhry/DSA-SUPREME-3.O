#include<iostream>
using namespace std;

int main(){

    int num1 , num2 , num3;

    cout << " Enter first number : ";
    cin >> num1;
    
    cout << " Enter second number : ";
    cin >> num2;

    cout << " Enter third number : ";
    cin >> num3;

    int avg = (num1 + num2 + num3)/3;

    cout << " Average is : " << avg << endl;

    return 0;
}
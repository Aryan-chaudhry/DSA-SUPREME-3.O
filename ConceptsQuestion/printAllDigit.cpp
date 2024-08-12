#include<iostream>
using namespace std;

void allDigits(int num){
    cout << "Number is : " << num << endl;
    while(num>0){
        int digit = num%10;
        cout << "digit : " << digit << endl; 
        num /= 10;
    }
}

int main(){

    int num = 123;
    allDigits(num);

    return 0;
}
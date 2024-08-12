#include<iostream>
using namespace std;

void findDigit(int num){
    // base case
    if(num == 0){
        return;
    }
    num = num/10;
    findDigit(num);
    // ek case mera 
    int digit = num % 10;
    cout << "digit : " << digit << endl;
}

int main(){
    int num = 389;
    findDigit(num);
    return 0;
}
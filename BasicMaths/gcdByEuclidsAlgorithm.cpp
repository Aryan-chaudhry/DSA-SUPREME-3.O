#include<iostream>
using namespace std;

int gcd(int a, int b){
    // bacis condition
    if(a == 0) return b;
    if(b == 0) return a;

    while(a>0 && b>0){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a==0?b:a;
}

int main(){

    int a = 72, b = 24;
    int Mygcd = gcd(a,b);
    cout << "My gcd of " << a << " and " << b << " is : " << Mygcd;
   
    return 0;
}

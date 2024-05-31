#include<iostream>
using namespace std;

int main(){
    
    int a = 5;
    cout << a << endl;


    cout << (a+=10) << endl;
    cout << (a-=5) << endl;
    cout << (a*=10) << endl;
    cout << (a/=10) << endl;
    cout << (a%=10) << endl;  
}
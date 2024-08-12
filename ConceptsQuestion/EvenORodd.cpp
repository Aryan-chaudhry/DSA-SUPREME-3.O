#include<iostream>
using namespace std;

void evenorodd(int n){

    cout << "From Bitwise Method ";
    
    if(n&1){
        cout << n << " is odd " << endl;
    }
    else{
        cout << n << " is even " << endl;
    }
}

void EvenorOdd(int n){

    cout << "From Normal Method ";

    if(n%2 == 0){
        cout << n << " is even " << endl;
    }
    else{
        cout << n << " is odd " << endl;
    }
}

int main(){
    int num;
    cout << "Enter number : ";
    cin >> num;

    EvenorOdd(num);
    evenorodd(num);

    return 0;
}
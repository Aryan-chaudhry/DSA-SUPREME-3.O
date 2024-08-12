#include<iostream>
using namespace std;

void checkPrime(int n){
    for(int i=2; i<n-1; i++){
        if(n%2 == 0){
            cout << "Not prime";
            break;
        }
        else{
            cout << "Prime";
            break;
        }
    }
    
}

int main(){
    int num;
    cin >> num;
    checkPrime(num);

    return 0;
}
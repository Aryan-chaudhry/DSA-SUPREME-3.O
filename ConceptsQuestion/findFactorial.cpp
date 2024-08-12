#include<iostream>
using namespace std;

 

void findFactorial(int n){
    long long int ans = 1;
    for(int i=n; i>0; i--){
        ans *= i;
    }
    cout << n << "! = " << ans << endl;
}

int main(){

    int num;
    cout << "Enter Number : ";
    cin >> num;

    findFactorial(num);
  
    return 0;

}
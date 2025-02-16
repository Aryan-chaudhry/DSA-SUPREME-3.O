#include<iostream>
using namespace std;

int power(int pow){
    // base case 
     if(pow == 0){
        return 1;
     }
     
     return 2*power(pow-1);
}

int main(){
    
    int pow;
    cout << "enter power : ";
    cin >> pow;

    int ans = power(pow);

    cout << "2 raise to " << pow << " is : " << ans << endl;

}
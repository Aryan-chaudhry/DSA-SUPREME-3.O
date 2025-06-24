// ****** Very very very very important ***
#include<bits/stdc++.h>
using namespace std;

/*
    jo bhi no 2 ke power me hota hai usme sirf ek set bit(1) hote hai

    SHORTCUT
    n = n&(n-1) --> count++;

    formula --> n & (n-1)  --> sabse last wali set bit remove ho jate hai

    agar koi no es formula ko use karke 0 ban jaye to matlab usme 1 hi set bit thi 
    matlab vo 2 ki koi power thi

    we can also count set bit using this formula
    set count of set bit until number not equal to 0
*/

int countSetBit(int n){
    int count = 0;
    int track = n;

    while(n != 0){
        count++;
        n = n & (n-1);
    }
    cout << "Set bit in " << track << " is : " << count << endl;
    return count;
}

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    int count = countSetBit(n);
    if(count == 1){
        cout << "Yes " << n << " is power of 2";
    }
    else{
        cout << "Sorry! " << n << " is not power of 2";
    }
}
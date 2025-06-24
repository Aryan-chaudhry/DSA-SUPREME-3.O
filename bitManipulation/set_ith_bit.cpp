#include<bits/stdc++.h>
using namespace std;

/*

Very important 

to get or fetch or check bit  --> AND with 1
to set or to change bit  --> OR with 1

*/

int set_ith_Bit(int n, int i){
    int mask = (i << i);
    n = n | mask;
    cout << "Update Number : " << n << endl;
}

int main(){
    int n, i;
    cout << "Enter n : ";
    cin >> n;

    cout << "Enter i : ";
    cin >> i;

    set_ith_Bit(n,i);

    return 0;
}
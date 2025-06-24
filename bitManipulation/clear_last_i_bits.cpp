#include<bits/stdc++.h>
using namespace std;

// kisi bhi bit ko 0 banana hai to usko 0 ke sath &(AND) kardo
// kisi bhi bit ko 1 banana hai to usko 1 ke sath |(OR) kardo  

void clear_last_i_bits(int n, int i){
    int mask = (-1 << i);
    n = n & mask;
    cout << "Updated Number : " << n << endl;
}

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    int i;
    cout << "Enter i : ";
    cin >> i;

    clear_last_i_bits(n,i);
}
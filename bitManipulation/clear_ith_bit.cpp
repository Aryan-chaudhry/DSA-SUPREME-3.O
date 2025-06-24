// clear means making bit equal to 0
#include<bits/stdc++.h>
using namespace std;

void clear_ith_Bit(int n, int i){
    int mask = ~(i<<i);
    n = n & mask;
    cout << "Updated Number is : " << n << endl;
}

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    int i;
    cout << "Enter i : ";
    cin >> i;

    clear_ith_Bit(n, i);
}
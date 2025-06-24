#include<bits/stdc++.h>
using namespace std;

void clear_bit_in_range(int n, int i, int j){
    int a = (-1 << (i+1));
    int b = ~(-1 << j);
    int mask = a | b;

    n = n & mask;

    cout << "Updated number : " << n << endl;
}

int main(){
    int n;
    int i;
    int j;

    cout << "Enter n : ";
    cin >> n;

    cout << "Enter i : ";
    cin >> i;

    cout << "Enter j : ";
    cin >> j;

    clear_bit_in_range(n,i,j);

    return 0;

}
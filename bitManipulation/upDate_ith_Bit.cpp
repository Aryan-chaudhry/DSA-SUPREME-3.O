#include<bits/stdc++.h>
using namespace std;

void clear_ith_bit(int &n, int i){
    int mask = ~(i << i);
    n = n & mask;
}

void update_ith_bit(int n, int i, int target){
    // step 1 clear the ith bit
    clear_ith_bit(n,i);
    // step 2 create mask and or
    int mask = (target << i);
    n = n | mask;
    cout << "Updated Number : " << n << endl;
}

int main(){
    int n;
    cout << "Enter n : ";
    
    int i;
    cout << "Enter i : ";
    cin >> i;

    int target;
    cout << "Enter target bit";
    cin >> target;

    // clear the ith bit
    // ith time left shift and do |(OR)

    update_ith_bit(n,i,target);
}
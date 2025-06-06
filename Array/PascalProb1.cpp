#include<bits/stdc++.h>
using namespace std;

int getElement(int n, int r){
    int res = 1;
    for(int i=0; i<r; i++){
        res = res*(n-i);
        res = res/(i+1);
    }
    return res;
}

int main(){
    int row;
    cout << "Enter Row : ";
    cin >> row;

    int col;
    cout << "Enter Col : ";
    cin >> col;

    int ans = getElement(row-1, col-1);
    cout << ans << endl;

    return 0;
}
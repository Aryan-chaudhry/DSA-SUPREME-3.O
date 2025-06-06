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

vector<int> getRow(int row){

    vector<int>ans;   

    for(int i=1; i<=row; i++){
        ans.push_back(getElement(row-1,i-1));
    }

    return ans;
}

int main(){
    int row;
    cout << "Enter row : ";
    cin >> row;

    vector<int>ans = getRow(row);

    for(auto no : ans){
        cout << no << " ";
    }
    return 0;
}
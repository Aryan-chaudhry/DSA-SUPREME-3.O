#include<bits/stdc++.h>
using namespace std;

static bool style(int &a, int &b){
    return a > b;
}

int main(){
    vector<int>arr = {40, 20, 10, 60, 30,50};
    
    for(auto no : arr){
        cout << no << " ";
    }


    cout << endl;

    sort(arr.begin(), arr.end(), style);

    for(auto no : arr){
        cout << no << " ";
    }

    return 0;
}
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool myComp(int &a, int &b){
    return a>b;
}

int main(){

    vector<int>v = {90, 30, 20, 100, 50, 40};

    for(auto i : v){
        cout << i << " ";
    }

    cout << endl;


    sort(v.begin(), v.end());

    for(auto i : v){
        cout << i << " ";
    }

    cout << endl;

    sort(v.begin(), v.end(), myComp);

    for(auto i : v){
        cout << i << " ";
    }


}
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr = {1,2,3,4,5};

    auto Sum = [&arr](int a, int b){
        
        for(int i=0; i<arr.size(); i++){
            arr[i] *= 2;
        }
        
        return a+b;
    };

    int ans = Sum(3,5);

    cout << ans << endl;

}
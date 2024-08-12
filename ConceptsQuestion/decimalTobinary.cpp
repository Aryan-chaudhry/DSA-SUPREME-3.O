#include<iostream>
#include<vector>
using namespace std;

void decimalToBinary(int n){
    vector<int>ans;
    while(n!=1){
        int digit = n%2;
        ans.push_back(digit);
        n = n/2;
    }
    ans.push_back(1);
    // reverse vector
    int i=0, j=ans.size()-1;
    while(i<j){
        swap(ans[i], ans[j]);
        i++;
        j--;
    }
    // print it
    for(auto it:ans){
        cout << it << " ";
    }
}

int main(){
    int num;
    cout << "Enter number : ";
    cin >> num;

    decimalToBinary(num);


}
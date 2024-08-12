#include<iostream>
using namespace std;

int setBit(int num){
    int count = 0;
    while(num > 0){
        int bit = num%2;
        if(bit == 1){
            count++;
        }
        num = num/2;
    }
    return count;
}

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    int SetbitCount = setBit(n);
    cout << SetbitCount << endl;

    return 0;
}

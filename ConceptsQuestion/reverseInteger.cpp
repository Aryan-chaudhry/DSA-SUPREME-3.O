#include<iostream>
using namespace std;

int reverse(int num){
    int x = num;
    if(num < 0) num = -num;
    int ans = 0;
    while(num > 0){
        int rem = num%10;
        ans = ans*10 + rem;
        num = num/10;
    }
    if(x<0)return -ans;
    return ans;
}

int main(){
    int num;
    cout << "Enter number : ";
    cin >> num;

    int ans = reverse(num);
    cout << ans << endl;

    return 0;
}
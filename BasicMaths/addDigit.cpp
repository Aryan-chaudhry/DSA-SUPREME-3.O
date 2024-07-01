#include<iostream>
using namespace std;



int bruteForce(int num){
     int sum = 0;
        int ans = 0;
        while(num > 0){
            int digit = num%10;
            sum += digit;
             num /= 10;

            while(sum >= 10){
                int digit = sum%10;
                ans += digit;
                sum = sum/10;
            }
            
        }
        return ans;
}

int main(){
    int num = 38;
    int ans = bruteForce(num);
    cout << "Bruteforce ans : " << ans << endl;

    return 0;
}
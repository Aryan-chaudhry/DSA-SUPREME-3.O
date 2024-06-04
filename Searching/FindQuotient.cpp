#include<iostream>
using namespace std;

int getQuotient(int dividend, int divisor){
    // search space (+dividend) -> (-divident)
    int st = -dividend;
    int end = +dividend;
    int mid = st + ((end - st)>>1);
    int ans = -1;

    while(st <= end){
       
        if((divisor * mid) == dividend){
            return mid;
        }
        else if ((divisor * mid) < dividend){
            // store and compute
            ans = mid;
            st = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = st + ((end - st)>>1);
    }
    return ans;
}

int main(){

    int dividend = 10;
    int divisor = -2;

    // mission is to find quotient
    int ans = getQuotient(abs(dividend), abs(divisor));
    if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0) ){
        ans = 0-ans;
    }
    cout << "Final ans : " << ans << endl;
    return 0;

}
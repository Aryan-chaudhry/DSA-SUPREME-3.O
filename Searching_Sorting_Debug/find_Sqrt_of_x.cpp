#include<bits/stdc++.h>
using namespace std;

int mysqrt(int x) {
        if (x == 0)
            return x;
        int first = 1, last = x;
        int ans = 0; // debug 1 --> take varibale to store squareroot to non perfect no
        while (first <= last) {
            int mid = first + (last - first) / 2;
            if (mid*mid  == x )
                return mid;
            else if (mid*mid > x) {
                last = mid-1; // debug 2 --> change mid to mid - 1, otherwose we run in infinte loop
            }
            else {
                ans = mid;
                first = mid+1; // debug 3 --> change mid to mid + 1, otherwise we run in infinite loop
            }
        }
    return ans; // debug 4 --> changed -1 to ans so that we can give ans of non-perfect squareroot number
}

int main(){
    int x = 20;
    int ans = mysqrt(x);
    cout << ans << endl;
}
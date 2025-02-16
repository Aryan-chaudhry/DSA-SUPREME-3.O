#include<bits/stdc++.h>
using namespace std;

double findsqrt(double sqrt){
    
    double st = 0;
    double end = sqrt;
    double mid = st + (end - st)/2;
    double ans = 0;

    while( (end - st) > 0.0000000001){

        if(mid*mid <= sqrt){
            ans = mid;
            st = mid;
        }
        else{
            end = mid;
        }
        mid = st + (end - st)/2;
    }
    return ans;
}

int main(){

    int sqrt = 63;
    double ans = findsqrt(sqrt);
    cout << "Sqrt of " << sqrt << " is : " << setprecision(10) << ans << endl;

    return 0;
}
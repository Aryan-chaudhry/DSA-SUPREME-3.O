#include<bits/stdc++.h>
using namespace std;

int findSqrt(int no){
    
    int ans = 0;

    int st = 0;
    int end = no;
    int mid = st + (end - st)/2;

    while(st <= end){
        
        if(mid*mid <= no){
            ans = mid;
            st = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = st + (end - st)/2;
    }
    return ans;
}

double findPrecision(int no){

    double sqrt = findSqrt(no);
    int precision = 11;
    double step = 0.1;

    while(precision--){
        double j = sqrt;
        while(j*j <= no){
            sqrt = j;
            j += step;
        }
        step /= 10;
    }
    return sqrt;
}

int main(){

    long long int no;
    cout << "Enter Number : ";
    cin >> no;

    double Ans = findPrecision(no);
    cout << "sqrt of " << no << " is : " << setprecision(11) << Ans << endl;

    return 0;
}
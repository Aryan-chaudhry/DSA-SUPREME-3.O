#include<iostream>
using namespace std;

long long int storeAndCompute(int x){
    int st = 0;
    int end = x;
    long long int mid = st + (end - st)/2;
    int ans = -1;
    while(st <= end){
        long long int prod = mid*mid;
        if(prod == x){
            return mid;
        }
        else if(prod < x){
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

int main(){
    int x = 16;
    long long int ans = storeAndCompute(x);
    cout << "Sqrt of x : " << ans << endl;
    return ans;
}
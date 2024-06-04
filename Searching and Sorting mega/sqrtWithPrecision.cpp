// search space Pattern
/* 
we Apply search space pattern when we get
out answer in a space which is known as answer space that's why we 
apply binary search in that space   so called search space pattern 
*/
#include<iostream>
using namespace std;

int sqrt(int n){
    int st = 0;
    int end = n;
    int mid = st + ((end - st)>>2);
    int ans = -1;
    
    while(st <= end){
        if(mid*mid == n){
            return mid;
        }
        else if(mid * mid < n){
            // store and compute 
            ans = mid;
            st = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = st + ((end - st)>>2);
    }
return ans;
}

int main(){
    int no = 4;
    int ans = sqrt(no);
    cout << ans << endl;
    return 0;
}
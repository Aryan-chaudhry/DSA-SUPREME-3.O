#include<iostream>
using namespace std;

int findExponentian(int a, int b){

    int ans = 1;
    while(b>0){
        if(b&1){
            // odd 
            ans = ans*a;
        }
        a *= a;
        b>>=1;
    }
return ans;
    // time complexity O(log(b))
}

int slowExponentian(int a , int b){
    
    int ans = 1;
     
    for(int i=0; i<b; i++){
        ans *= a;
    }
    return ans;

    // time complexity : O(b)
}

int main(){
    int a = 2;
    int b= 4;

    int ans = findExponentian(a,b);
    cout << a << "^" << b << " is : " << ans << endl;
    return 0;

}
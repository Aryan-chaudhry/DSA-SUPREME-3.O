#include<bits/stdc++.h>
using namespace std;

int findRoot(int n){
    int st = 0;
    int end = n;
    int ans = 0;

    while(st <= end){
        int mid = st + (end - st)/2;

        if(mid*mid <= n){
            ans = mid;
            st = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

double accuracy(int n){
    double sqrt = findRoot(n); 
    int precision = 12;
    double step = 0.1;
    //O(precision)
    while(precision--){
        double j = sqrt; //j->/7.0
        while(j*j<=n){
            //store and compute
            sqrt = j;
            j+=step; //j->7.1
        }
        //after this while loop i got 1 precisiom ans
        step/=10;
    }
    return sqrt;
}

int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;

    double sqrt = accuracy(n);
    cout << setprecision(12) << sqrt << endl;

}
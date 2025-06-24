#include<bits/stdc++.h>
using namespace std;

// Learning
/* Agar mujhe pata karna hai ki koi bhi bit 1 hai ya 0 
me simply usko 1 ke sath &(AND) kar dunga
*/

int getithBit(int n, int i){
    int mask = (1 << i);
    int ans = n & mask;
    if(ans == 0){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    int i;
    cout << "Enter ith bit ";
    cin >> i;

    cout << getithBit(n, i);


}
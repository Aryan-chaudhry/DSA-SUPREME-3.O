/*
hum ek case solve karenge bake recursion sambhal lega
*/
#include<iostream>
using namespace std;

void reachHome(int &step, int me, int &home){
    // base case 
    if(me == home){
        cout << "me ghar pouch gya" << endl;
        return;
    }

    // Note :-  ek case solve karna hain 
    // bake recursion sambbhal lega

    cout << " me ghar ja rha hu" << endl;
    me = me - 1;
    cout << "me apne ghar se " << me << " steps dur hu " << endl;
    // bake recursion sambhal lega
    reachHome(step, me, home);

}
int main(){
    int step = 10;
    int me = 10;
    int home = 0;

    reachHome(step, me, home);
}
#include<iostream>
using namespace std;

int main(){

    bool condn1 = true;
    bool condn2 = false;
    bool condn3 = true;

    // cout << (condn1 && condn2 && condn3) << endl;
    // cout << (condn1 || condn2 || condn3) << endl;

    // cout << (! condn1) << endl;
    // cout << (! condn2) << endl;
    // cout << (! condn3) << endl;

    // if( condn1 && condn2 && condn3){
    //     cout << "All condition are true" << endl;
    // }
    // else{
    //     cout << " All condition are not true" << endl;
    // }
    
     if( condn1 || condn2 | condn3){
        cout << "at least one condition is true" << endl;
    }
    else{
        cout << " All condition are false" << endl;
    }
}
#include<iostream>
using namespace std;

class functor1{
    public:

    bool operator()(int a, int b){
        // desecnding order me compare karna chahte ho
        // a > b --> true    
        // meand a should be placed before b
        return a > b;
    }
};

int main(){

    functor1 cmp;
    if(cmp(10,5)){
        cout << " 10 is greater than 5 " << endl;
    }
    else{
        cout << "10 is less than 5" << endl;
    }


    return 0;
}
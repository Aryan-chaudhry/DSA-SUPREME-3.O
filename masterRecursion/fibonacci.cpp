#include<iostream>
using namespace std;

int fibonacci(int term){
    // base case
    if(term == 0 || term == 1){
        return term;
    }

    return fibonacci(term-1) + fibonacci(term-2);
    }

int main(){
    int term;
    cout << "Enter term : ";
    cin >> term;

   int ans =  fibonacci(term);
   cout << ans << endl;
}
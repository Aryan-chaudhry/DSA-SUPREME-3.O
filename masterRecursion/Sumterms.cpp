#include<iostream>
using namespace std;

void sumi(int &term, int i, int &sum){
    // base case 
    if(i > term){
        return;
    }
    // ek case me solve karunga
    sum += i;
    // bake recursion dekhlega
    sumi(term, i+1, sum);

}
int main(){
    int term = 10;
    int i = 0;
    int sum = 0;

    sumi(term, i, sum);
    cout << sum << endl;
}
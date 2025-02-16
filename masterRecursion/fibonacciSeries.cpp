#include<iostream>
#include<vector>
using namespace std;

void printSeries(int &zero, int &first, int cnt, int series[], int size){
    // base case 
     if(cnt == size){
        return;
     }
     // ek case me solve karunga bake recursion sambhal lega
    series[cnt] = series[cnt-1]+series[cnt-2];
    // bake recursion sambhal lega
    printSeries(zero, first, cnt+1, series, size);
}
int main(){
    
    int zero = 0;
    int first = 1;
    int cnt = 2;

    int size;
    cout << "enter size : ";
    cin >> size;

    int series[size];
    series[0] = 0;
    series[1] = 1;

    printSeries(zero, first, cnt, series, size);

    for(int i=0; i<size; i++){
        cout << series[i] << " ";
    }

}
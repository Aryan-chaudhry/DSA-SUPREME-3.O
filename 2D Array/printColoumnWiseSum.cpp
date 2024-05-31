#include<iostream>
using namespace std;

void coloumnWisesum(int arr[][3] , int rowsize , int colsize){

    for(int col=0; col<colsize; col++){
        int sum = 0;
        for(int row=0; row<rowsize; row++){
            sum += arr[row][col];
        }
        cout << sum << endl;
    }
}

int main(){

     int arr[3][3] = {
                    {10,20,30},
                    {40,50,60},
                    {70,80,90}
                  };
    
    int rowsize = 3;
    int colsize = 3;

    coloumnWisesum(arr , rowsize , colsize);

    return 0;
}
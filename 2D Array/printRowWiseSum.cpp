#include<iostream>
using namespace std;

void rowWiseSum(int arr[][3] , int rowsize , int colsize){

    for(int row=0; row<rowsize; row++){
        int sum = 0;
        for(int col=0; col<colsize; col++){
            sum+= arr[row][col]; 
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
    
    rowWiseSum(arr , 3 , 3);
    return 0;
}
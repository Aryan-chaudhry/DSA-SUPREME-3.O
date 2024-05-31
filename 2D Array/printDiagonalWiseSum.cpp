#include<iostream>
using namespace std;

void leftDiagonalSum(int arr[][3] , int rowsize , int colsize){

    int sum = 0;
    for(int row=0; row<rowsize; row++){
        sum += arr[row][row];
    }
    cout << sum << endl;

}

void rightDiagonalSum(int arr[][3] , int rowsize , int colsize){

    int sum = 0;
    for(int row=0; row<rowsize; row++){
        sum += arr[row][rowsize-1-row];
    }   
    cout << sum << endl;
}

int main(){

     int arr[3][3] = {
                    {10,20,30},
                    {40,50,60},
                    {70,80,90}
                    };

    int rowsize = 3;
    int colsize = 3;

    leftDiagonalSum(arr , rowsize , colsize);
    rightDiagonalSum(arr , rowsize , colsize);

    return 0;
}

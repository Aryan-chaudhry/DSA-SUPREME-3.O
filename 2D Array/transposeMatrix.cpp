#include<iostream>
using namespace std;

void transpose(int arr[][3] , int rowsize , int colsize){

    for(int row=0; row<rowsize; row++){
        for(int col=row; col<colsize; col++){
            swap(arr[row][col] , arr[col][row]);
        }
    }
}

void transposeMatrix(int arr[][3] , int nums[][3] , int rowsize , int colsize){

    
    for(int row=0; row<rowsize; row++){
        for(int col=0; col<colsize; col++){
            nums[col][row] = arr[row][col];
        }
    }

}

void print(int arr[][3] , int rowsize , int colsize){

    for(int row=0; row<rowsize; row++){
        for(int col=0; col<colsize; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
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

    int nums[3][3];
    
    // print(arr , rowsize , colsize);
    // cout << endl;
    // transposeMatrix(arr , nums , rowsize , colsize);
    // cout << endl;
    // print(nums , rowsize , colsize);
    // cout << endl;
    transpose(arr , rowsize ,colsize);
    cout << endl;
    print(arr , rowsize ,colsize);

    return 0;
}
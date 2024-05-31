#include<iostream>
using namespace std;

int main(){





    int arr[2][3];
    int rowsize = 2;
    int colsize = 3;

    //taking inout -> row wise

    for(int i = 0; i < rowsize; i++){ 
        for(int j = 0; j < colsize; j++){
            cout << "Enter the value for (" << i << ", " << j << ") : ";
            cin >> arr[i][j];
        }
    }
    cout << "Printing 2D Array " << endl;
    for(int i = 0; i < rowsize; i++){
        for(int j = 0; j < colsize; j++){
            cout <<  arr[i][j] << " ";
        }
        cout << endl;
    }

    // declaration
    // int arr[4][3];

    // initialization
    // int arr[3][2] = {
    //                  {10,20},
    //                  {30,40},
    //                  {50,60}
    //                  };
    
    // int arr[3][3] = {10,20,30,40,50,60,70,80,90};
    // int arr[3][2] = {10,20}; 
    // cout << arr[0][1] << endl;
    // cout << arr[1][1] << endl;
    // cout << arr[2][1] << endl;

    // traverse the entire array row wise

    // for(int row = 0; row < 3; row++){
    //     for(int col=0; col < 3; col++){
    //         cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // }
    
    // cout << endl;

    // traverse the entire array col wise
    // for(int col = 0; col < 3; col++){
    //     for(int row =0; row < 3; row++){
    //         cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << endl;

    // diagonal printing

    // for(int row = 0; row < 3; row++){
    //     for(int col = 0; col < 3; col++){
    //         if(row == col){
    //             cout << arr[row][col] << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // time complexity O(n^2)

    // Diagonal printing  with time complexity O(n)

    // for(int row = 0; row < 3; row++){
    //     cout << arr[row][row]<< " ";
    // }

    // cout << endl;
    // diagonal wise traversal

    // for(int row = 0; row < 3; row++){
    //     cout << arr[row][3-1-row] << " ";
    // }

    // cout << endl;




    return 0;
}
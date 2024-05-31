#include<iostream>
using namespace std;

int main(){

    for(int row=0; row<5; row++){
        int Totalrow = row+1;
        for(int col=0; col<Totalrow; col++){

            if(row == 0 || row == 5-1 || row == col || col == 0){
                cout<< "* ";
            }
            else{
                cout << "  ";
            }
           
        //    if(row == 0 || row == 1 || row == 5-1){
        //     cout << "* ";
        //    }
        //    else{
        //     // middle case 
        //     if(col == 0 || col == Totalrow-1){
        //         cout << "* ";
        //     }
        //     else{
        //         cout << "  ";
        //     }
        //    }
        }
      cout << endl;
    }
}
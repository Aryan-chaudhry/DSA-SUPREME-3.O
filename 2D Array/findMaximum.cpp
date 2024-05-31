#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int arr[3][3] = {
                    {10,20,30},
                    {40,50,60},
                    {70,80,90}
                    };

    int maxi = INT_MIN;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            maxi = max(maxi , arr[i][j]);
        }
    }

    cout << "Maximum element in 2D Array is : " << maxi << endl;
 
     return 0;
}

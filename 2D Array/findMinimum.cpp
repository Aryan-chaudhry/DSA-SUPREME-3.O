#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[3][3] = {
                    {10,20,30},
                    {40,50,60},
                    {70,80,90}
                    };
    
    int mini = INT_MAX;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            mini = min(mini , arr[i][j]);
        }
    }

    cout << "Minimum element in 2D Array is : " << mini << endl;

    return 0;
}
#include<iostream>
using namespace std;

void findZeroOnes(int arr[] , int size){

    int zerocount = 0;
    int Onecount = 0;

    for(int i=0; i<size; i++){
        if(arr[i] == 0){
            zerocount++;
        }
        if(arr[i] == 1){
            Onecount++;
        }
    }

    cout << "Number of zero in Array : " << zerocount << endl;
    cout << "Number of ones in Array : " << Onecount << endl;
}

int main(){

    int arr[] = {1,0,2,1,3,0,4,0,1,0,1,0,5};
    int size = 13;

    findZeroOnes(arr , size);

    return 0;
}
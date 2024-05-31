#include<iostream>
#include<limits.h>
using namespace std;

int findMaxi(int arr[] , int size){

    int maxi = INT_MIN; 
    
    for(int i=0; i<size; i++){
        maxi = max(maxi , arr[i]);
        // OR
        // if(arr[i] > maxi){
        //     maxi = arr[i];
        // }
    }
    return maxi;
}

int main(){

    int arr[] = {10,20,30,40,50};
    int size = 5;

   int maximum =  findMaxi(arr , size);
   cout << " Maximum no in array is : " << maximum << endl;
    return 0;
}
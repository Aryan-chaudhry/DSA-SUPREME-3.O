#include<iostream>
#include<limits.h>
using namespace std;



int findMin(int arr[] , int size){

    int minans = INT_MAX;
    
    for(int i=0; i<size; i++){
        
        minans = min(minans , arr[i]);
    //    OR    
    //    if(arr[i] < minans){
    //     minans = arr[i];
    //    }

    }
    return minans;
}

int main(){

    int arr[] = {10,20,30,40,50};
    int size = 5;

   int minimum =  findMin(arr , size);
   cout << "Minimum no in an array is : " << minimum << endl;

   return 0;
}
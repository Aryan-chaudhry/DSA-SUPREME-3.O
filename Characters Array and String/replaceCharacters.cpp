#include<iostream>
using namespace std;

void replaceCharacters(char original, char replace , char arr[] , int size){
    for(int i=0; i<size; i++){
        if(arr[i] == original){
            arr[i] = replace;
        }
    }
}




int main(){
    char arr[100];
    int size = 100;
    cin >> arr;
    

    replaceCharacters('@', ' ', arr, size);
    cout << arr ;

}
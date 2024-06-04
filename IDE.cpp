#include<iostream>
using namespace std;

void reverse(char arr[], int size){

    int st = 0;
    int end = size-1;
    while(st <= end){
        swap(arr[st], arr[end]);
        st++;
        end--;
    }
}

void print(char arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main(){
    char arr[] = {'h','e','l','l','o'};
    int size = 5;
    cout << "Before reverse : ";
    print(arr,5);
    reverse(arr, 5);
    cout << "After reverse : ";
    print(arr, 5);
    return 0;
}
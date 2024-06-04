#include<iostream>
using namespace std;

int getLength(char arr[], int size){
    int length = 0;
    int index = 0;

    while(arr[index] != '\0'){
        length++;
        index++;
    }
    return length;
}

void toUppercase(char arr[], int size){
    int length = getLength(arr, size);

    for(int i=0; i<length; i++){
        char ch = arr[i];
        ch = ch-'a'+'A';
        arr[i]=ch;
    }
}

int main(){
    char arr[100];
    int size = 100;
    cin.getline(arr,size);

    toUppercase(arr, size);
    cout << arr;

    return 0;
}
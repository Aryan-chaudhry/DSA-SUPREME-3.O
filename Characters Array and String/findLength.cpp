#include<iostream>
using namespace std;


int findLength(char arr[], int size){
    int length = 0;
    int index = 0;
    while(arr[index] != '\0'){
        length++;
        index++;
    }
    return length;
}



int main(){
    char arr[100];
    int size = 100;
    cin.getline(arr,100);

    int length = findLength(arr, size);
    cout << "Length is : " << length << endl;
    return 0;
}
#include<iostream>
using namespace std;

int getLength(char arr[], int size){
    int length = 0;
    for(int i=0; i<size; i++){
        if(arr[i] == '\0'){
            break;
        }
        else{
            length++;
        }
    }
    return length;
}

void reverse(char arr[], int size){
   int length = getLength(arr, size);
   int st = 0;
   int end = length-1;

   while(st <= end){
    swap(arr[st],arr[end]);
    st++;
    end--;
   }
}

int main(){
    char arr[100];
    int size = 100;
    // taking input;
    cin >> arr;
    // calling function
    reverse(arr, size);
    // printing output
    cout << arr << endl;
    
    return 0;
}
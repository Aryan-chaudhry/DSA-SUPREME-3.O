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

bool validPalindrome(char arr[], int size){
    int length = getLength(arr, size);
    int st = 0;
    int end = length - 1;

    while(st <= end){
        if(arr[st] != arr[end]){
            return false;
        }
        else{
            st++;
            end--;
        }
    }
    return true;
}


int main(){
    char arr1[100];
    int size = 100;
    // taking input
    cin.getline(arr1, size);

  bool ans = validPalindrome(arr1, size);
  if(ans == true){
    cout << "Valid Palindrome" << endl;
  }
  else{
    cout << "Invalid Palindrome" << endl;
  }
   
    return 0;
}
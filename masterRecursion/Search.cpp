#include<iostream>
using namespace std;

bool search(int arr[], int &size, int &target, int index, bool &present){
    // base case
    if(index >= size){
        if(present == false){
            // target nahi mila
            return false;
        }
        return true;
    }
    // processing
    // ek case solve karna hain --> first element target ke equal hain ya nahi
    if(target == arr[index]){
        present = true;
    }
    // bake recursion dekh lega kya karna haim
     search(arr, size, target, index+1, present);
}

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int target = 10;
    int index = 0;
    bool present = false;

    bool ans = search(arr, size, target, index, present);
    if(ans == true){
        cout << "Target present" << endl;
    }
    else{
        cout << "Target not present " << endl;
    }
}
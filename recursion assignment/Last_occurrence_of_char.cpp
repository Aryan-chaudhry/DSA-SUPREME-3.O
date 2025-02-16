#include<iostream>
using namespace std;

int iterative1(string &str, int length, char ch){

    int index = -1;

    for(int i=0; i<length; i++){
        if(str[i] == ch){
            index = i;
        }
    }
    return index;
}

int iterative2(string &str, int length, char ch){

    int index = 0;
    
    for(int i=str.length()-1; i>=0; i--){
        if(str[i] == ch){
            index = i;
            break;
        }
    }
    return index;
}

int Recursion1(string &str, char ch, int length, int StoreIndex, int TraverseIndex){
    // base case
    if(TraverseIndex >= length){
        return StoreIndex;
    }

    // ek case hum solve karenge 
    if(str[TraverseIndex] == ch){
        StoreIndex = TraverseIndex;
    }
    // recursion sambhal lega
    return Recursion1(str, ch, length, StoreIndex, TraverseIndex+1);

}

int Recursion2(string &str, char ch, int StoreIndex2, int Traverseindex2){
    // base case
    if(str[Traverseindex2] == ch){
        StoreIndex2 = Traverseindex2;
        return StoreIndex2;
    }

    return Recursion2(str, ch, StoreIndex2, Traverseindex2-1);
}



int main(){

    string str = "abcddedg";
    int length = str.length();
    
    char ch = 'd';

    int ans1 = iterative1(str, length, ch);
    cout << "From iterative1 : " << ans1 << endl;

    int ans2 = iterative2(str, length, ch);
    cout << "From iterative2 : " << ans2 << endl;

    int storeIndex1 = 0, TraverseIndex1 = 0;

    int ans3 = Recursion1(str, ch, length, storeIndex1, TraverseIndex1);
    cout << "From recursion1 : " << ans3 << endl;

    int storeIndex2 = 0, TraverseIndex2 = length - 1;

    int ans4 = Recursion2(str, ch, storeIndex2, TraverseIndex2);
    cout << "From recursion2 : " << ans4 << endl;

}
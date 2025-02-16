#include<iostream>
using namespace std;

int lastOccurrence(string &str, int index, int ansIndex, char ch){

    // base case 
    if(index >= str.length()){
        return ansIndex;
    }

    

    // ek case hum solve karenge bakke recursion 
    if(str[index] == ch){
        ansIndex = index;
    }

    lastOccurrence(str, index+1, ansIndex, ch);

   

}

int main(){

    string str;
    cin >> str;

    char ch;
    cin >> ch;

    int index = 0;
    int ansIndex = -1;

    int ans = lastOccurrence(str, index, ansIndex, ch);
    cout << "Last Occurrence of " << ch << " is : " << ans << endl;

    return 0;
}
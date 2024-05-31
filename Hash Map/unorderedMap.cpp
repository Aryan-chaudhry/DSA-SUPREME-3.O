#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int,int>table;
    // roll no , desk no

    // insertion
    table[1] = 53; // table ke 1 key par 53 desk no assign kar deya
    table[2] = 54;
    table[3] = 55;

    // iterate
    // map me iterate karne ke leye iterator banana padta hai
    // sytax 
    //unordered_map<key_datatype, value_datatype>::iterator iteratorname
    unordered_map<int, int>::iterator it;

    for(it = table.begin(); it != table.end(); it++ ){
        int key = it->first;
        int value = it->second;
        cout << "Key : " << key << ", " << "Value : " << value << endl;
    }
    cout << endl;

    // another syatax use for each loop
    for(auto it:table){
        int key = it.first;
        int value = it.second;
        cout << "Key : " << key << ", " << "Value : " << value << endl;
    }

    return 0;
}
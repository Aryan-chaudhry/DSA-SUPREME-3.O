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
    cout << endl;
    // find
    if(table.find(2) != table.end()){
        // found
        // now access
        int value = table[2];
        cout << "Found and Value is : " << value << endl;

    }
    else{
        // not found
        cout << "Not found" << endl;
    }
    cout << endl;

    // deletion
    table.erase(2);
    cout << "After erasing " << endl;

    for(auto it:table){
        int key = it.first;
        int value = it.second;
        cout << "Key : " << key << ", " << "Value : " << value << endl;
    }
    cout << endl;

    if(table.find(2) != table.end()){
        // found
        // now access
        int value = table[2];
        cout << "Value is : " << value << endl;

    }
    else{
        // not found
        cout << "Not found" << endl;
    }
    cout << endl;


    
    return 0;
}
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    // map
    unordered_map<string, string>table;
    
    // insertion

    // method 1
    table["in"] = "India";

    // method 2
    table.insert(make_pair("en" , "England"));

    // method 3
    pair<string, string>p;
    p.first = "br";
    p.second = "Brazil";
    table.insert(p);

    // size
    cout << "Size of Unordered_map : " << table.size() << endl;

    // clear
    table.clear();

    // size checking
    cout << "Size of Unordered_map : " << table.size() << endl;

    // empty
    if(table.empty()){
        cout << "Table is empty " << endl;
    }
    else{
        cout << "Table is not empty " << endl;
    }

    table["Ar"] = "Aryan";
    table["Ay"] = "Ayush";
    table["Mu"] = "Muskan";
    table["Ra"] = "Rajesh";
    table["Jo"] = "Joginder singh";
    table["Am"] = "Amar Singh";
    table["sh"] = "Shanti Devi";
    // using at() operator
    cout << table.at("Mu") << endl;
    // using [] operator
    cout <<  table["Ra"] << endl;
    // traverse
    //unordered_map<string, string>::iterator it = table.begin();
    for(auto it:table){
        cout << it.first << " -> " << it.second << endl;   
    }
    // find
    if(table.find("M")!= table.end()){
        cout << "Key Found" << endl;
    }
    else{
        cout << "Key not Found" << endl;
    }
    // count
    if(table.count("Mu") == 0){
        cout << "Key not found" << endl;
    }
    else{
        cout << "Key found" << endl;
    }
   
   

}
#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main(){

    unordered_map<int, string>ump;
    map<int, string>omp;

    ump[1] = "Muskan";
    ump[2] = "Aryan";
    ump[3] = "Ayush";

    omp[1] = "Muskan";
    omp[2] = "Aryan";
    omp[3] = "Ayush";

    for(auto i : ump){
        cout << i.first << " -> " << i.second << endl;
    }
    cout << endl;


    for(auto i : omp){
        cout << i.first << " -> " << i.second << endl;
    }

    // search

    if(ump.find(1) == ump.end()){
        cout << 1 << " is not present " << endl;
    }
    else{
        cout << 1 << " is present " << endl;
    }

    if(omp.count(1) == 0){
        cout << 1 << " is not present " << endl;
    }
    else{
        cout << 1 << " is present " << endl;
    }
}
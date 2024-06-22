#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){
    // creation 
    unordered_set<int>s;

    //insertion
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);

    // traverse
    unordered_set<int>::iterator it = s.begin();
    while(it != s.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;
    // size
    cout << "Size : " << s.size() << endl;
    // empty
    if(s.empty()){
        cout << "Set is empty " << endl;
    }
    else{
        cout << "Set is not empty " << endl;
    }
    // clear
    s.clear();
    // checking size after clear the set
    cout << "Size of set after doing clear operation : " << s.size() << endl;
   
    s.insert(10);
     // erase
    s.erase(s.begin(), s.end());
    // checking size
    cout << s.size() << endl;
    // find
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);

    if(s.find(10) != s.end()){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
    // count
    if(s.count(10) == 1){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }  

}
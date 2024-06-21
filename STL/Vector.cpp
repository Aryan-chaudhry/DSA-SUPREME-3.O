#include<iostream>
#include<vector>
using namespace std;

int main(){
    // creation
    // vector<int>marks(5,-1);

    // cout << *(marks.begin()) << endl;
    // cout << *(marks.end()) << endl;

    vector<int>marks;
    // marks.reserve(10); // reserved the capacity
    // cout << "Maximum size : " << marks.max_size() << endl;
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);
    marks.clear();

    // marks.push_back(50);

    // cout << "Capacity : " << marks.capacity() << endl;
     cout << "Size of vector : " << marks.size() << endl;

    // marks.pop_back();
    // cout << "Element at index 2 : " << marks[2] << endl;
    // cout << "Element at index 2 : " << marks.at(2) << endl;
    // cout << "Size of vector : " << marks.size() << endl;
    // cout << "Front Element  : " << marks.front() << endl;
    // cout << "Back Element   : " << marks.back() << endl;
    
    // if(marks.empty()==true){
    //     cout << "Vector is empty." << endl;
    // }
    // else{
    //     cout << "Vector is not empty." << endl;
    // }
    
    return 0;
}


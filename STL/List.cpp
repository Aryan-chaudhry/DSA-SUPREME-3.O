#include<iostream>
#include<list>
using namespace std;

int main(){

    // creation
    list<int>myList;

    //insertion
    // push_back()
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);
    // push_front()
    myList.push_front(5);
    myList.push_front(0);

    // romove
    myList.remove(10);
    // pop_back()
    myList.pop_back();
    // pop_front()
    myList.pop_front();

    //insert()
    myList.insert (myList.begin(),100);
    // erase
    myList.erase(myList.begin());
    // begin()
    cout << "begin() : " << *(myList.begin()) << endl;
    // end()
    cout << "end() : " << *(myList.end()) << endl;
    // size()
    cout << "Size of list : " << myList.size() << endl;
    // empty()
    if(myList.empty()){
        cout << "List is empty" << endl;
    }
    else{
        cout << "List is not empty" << endl;
    }
    // front()
    cout << "front() : " << myList.front() << endl;
    // back()
    cout << "back() : " << myList.back() << endl;

    

    
    
    // traverse
    list<int>::iterator it = myList.begin();
    while(it != myList.end()){
        cout << *it << " ";
        it++;
    }
}
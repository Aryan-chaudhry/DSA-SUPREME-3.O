#include<iostream>
#include<queue>
using namespace std;

int main(){
    // creation
    deque<int>dq;

    // push_back
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    // push_front
    dq.push_front(5);
    dq.push_front(0);

    // pop_front()
    dq.pop_front();

    // pop_back()
    dq.pop_back();

    // size
    int size = dq.size();
    cout << "Size : " << size << endl;

    // front
    cout << "front : " << dq.front() << endl;

    // back
    cout << "back : " << dq.back() << endl;

    // empty
    if(dq.empty()){
        cout << "Deque is empty " << endl;
    }
    else{
        cout << "Deque is not empty " << endl;
    }
    // iterator
    deque<int>::iterator it = dq.begin();
    while(it != dq.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    // operator
    cout << dq[0] << endl;

    // at
    cout << dq.at(0) << endl;

    // clear
    dq.clear();

    cout << "Size : " << dq.size() << endl;

    // insert
    dq.insert(dq.begin(),101);

    // erase
    dq.erase(dq.begin(), dq.end());

    
    
}


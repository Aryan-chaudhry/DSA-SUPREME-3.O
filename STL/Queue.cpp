#include<iostream>
#include<queue>
using namespace std;

int main(){
    // creation
    queue<int>q;

    // insertion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // romove
    q.pop();

    // size
    cout << "Size of Queue : " << q.size() << endl;
    // empty
    if(q.empty()){
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }
    //front
    cout << "Front element : " << q.front() << endl;
    // rear
    cout << "back element : " << q.back() << endl;
    
}
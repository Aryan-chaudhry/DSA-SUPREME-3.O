#include<iostream>
#include<queue>
using namespace std;

int main(){
    // creation
    priority_queue<int>pq;
    // max-heap -> maximum value -> highest priority 

    pq.push(10);
    // 10
    pq.push(20);
    // 20, 10
    pq.push(30);
    // 30, 20, 10
    pq.push(40);
    // 40, 30, 20, 10

    // top element -> highest priority element
    cout << pq.top() << endl;

    // pop
    pq.pop();
    // highest elelemt -> pop hoga

    // size
    cout << "Size : " << pq.size() << endl;

    // empty
    if(pq.empty()){
        cout << "pq is empty " << endl;
    }
    else{
        cout << "pq is not empty " << endl;
    }
}



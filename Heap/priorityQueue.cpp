#include<iostream>
#include<queue>
using namespace std;


int main(){

    // min heap
    priority_queue<int, vector<int>, greater<int>>pq;
    
    pq.push(10);
    pq.push(5);
    pq.push(20);
    pq.push(1);

    cout << pq.top() << endl;
    pq.pop();

    cout << pq.top() << endl;
    pq.pop();

    cout << pq.top() << endl;
    pq.pop();

    cout << pq.top() << endl;
    pq.pop();


    
   
    
    
    
    // priority_queue<int>pq;

    // cout << "hello" << endl;
    // pq.push(10);
    // pq.push(5);
    // pq.push(20);
    // pq.push(30);
    // pq.push(19);

    // // access front element
    // cout << pq.top() << endl;

    // // removal
    // pq.pop();
    // cout << pq.top() << endl;

    // pq.pop();
    // cout << pq.top() << endl;

    // pq.pop();
    // cout << pq.top() << endl;

    // cout << pq.size() << endl;

    // if(pq.empty()){
    //     cout << "Yes empty!" << endl;
    // }
    // else{
    //     cout << "No priority queue is not empty " << endl;
    // }

}

#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:

    int*arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        arr = new int[size];
        this -> size = size;
        this -> front = -1;
        this -> rear = -1;
    }

    void push(int element){
        if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[rear] = element;
            cout << element << " Push successfully" << endl;
        }
        else if(rear == size-1){
            cout << "Queue OverFlow" << endl;
        }
        else{
            rear++;
            arr[rear] = element;
             cout << element << " Push successfully" << endl;
        }
    }

    void pop(){
        if(front == -1 && rear == -1){
            cout << "Queue UnderFlow" << endl;
        }
        else if(front == rear){
            cout << arr[front] << " Pop successfully"<< endl;
            // this is the last element to pop
            front = -1;
            rear = -1;
       
        }
        else{
            cout << arr[front] << " Pop successfully"<< endl;
            front++;
        }
    }

    void getFront(){
        if(front == -1){
            cout << "Sorry Queue is empty" << endl;
        }
        else{
            cout << "Front : " << arr[front] << endl;
        }
    }

    void getRear(){
        if(rear == -1){
            cout << "Sorry Queue is empty" << endl;
        }
        else{
            cout << "Rear : " << arr[rear];
        }
    }

    void isEmpty(){
        if(front == -1 && rear == -1){
            cout << "Yes Queue is Empty" << endl;
        }
        else{
            cout << "No Queue os not Empty" << endl;
        }
    }

    void isFull(){
        if(front == 0 && rear == size - 1){
            cout << "Yes Queue is Full" << endl;
        }
        else{
            cout << "No Queue is not Full" << endl;
        }
    }

    void getSize(){
        if(front == -1 && rear == -1){
            cout << "Size : " << 0 << endl;
        }
        else{
            cout << "Size : " << rear - front + 1 << endl;
        }
    }
};

int main(){
    Queue q(5);
    // q.push(10);    
    // q.push(20);    
    // q.push(30);
    // q.push(40);
    // q.push(50);
    // q.push(60); // overflow cant push
    // q.pop(); //  --> 10
    // q.pop(); // --> 20
    // q.pop(); // --> 30
    // q.pop(); // --> 40
    // q.pop(); // --> 50
    // q.pop(); // --> underflow cant pop

    // q.isEmpty(); // yes
    // q.getSize(); // 0
    // q.getFront(); // empty
    // q.getRear(); // empty
    // q.isFull();

    q.push(10);    
    q.push(20);    
    q.push(30);
    q.push(40);
    q.push(50);
    q.isFull();
    q.pop();
    q.isFull();
}
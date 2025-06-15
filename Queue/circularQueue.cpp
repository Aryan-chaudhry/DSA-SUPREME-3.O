#include<bits/stdc++.h>
using namespace std;

class circularQueue{
    public:

    int size;
    int *arr;
    int front;
    int rear;

    circularQueue(int size){
        this -> size = size;
        arr = new int[size];
        this -> front = -1;
        this -> rear = -1;
    }

    void push(int element){
       if( (front == 0 && rear == size-1) || (rear == front-1) ){
            cout << "Queue Overflow" << endl;
        }
       else if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[rear] = element;
            cout << element << " push successfully" << endl;
        }
       else if(rear == size-1 && front != 0){
            rear = 0;
            arr[rear] = element;
            cout << element << " push successfully" << endl;
        }
       else{
            rear++;
            arr[rear] = element;
            cout << element << " push successfully" << endl;
        }
    }

    void pop(){
        if(front == -1 && rear == -1){
            cout << "Queue underflow" << endl;
        }
        else if(front == rear){
            cout << arr[front] << " pop successfully" << endl;
            front = -1;
            rear = -1;
        }
        else if(front == size-1){
           cout << arr[front] << " pop successfully" << endl;
            front = 0;
        }
        else{
            cout << arr[front] << " pop successfully" << endl;
            front++;
        }
    }

    void getSize(){
        if(front == -1 && rear == -1){
            cout << "Size : " << 0 << endl;
        }
        else{
            cout << abs(rear-front+1) << endl;
        }
    }

    void getFront(){
        if(front == -1){
            cout << "circular Queue is empty" << endl;
        }
        else{
            cout << arr[front] << endl;
        }
    }

    void getRear(){
        if(rear == -1){
            cout << "Circular Queue is empty" << endl;
        }
        else{
            cout << arr[rear] << endl;
        }
    }
};

int main(){
    circularQueue q(4);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.pop();
    q.push(50);
    q.getRear();
    q.getFront();
}
#include<bits/stdc++.h>
using namespace std;

class Dequeue{
    public:

    int *arr;
    int size;
    int front;
    int rear;

    Dequeue(int size){
        this -> size = size;
        arr = new int[size];
        this -> front = -1;
        this -> rear = -1;
    }

    void push_rear(int element){
        if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[rear] = element;
            cout << element << " push successfully" << endl;
        }
        else if(rear == size-1){
            cout << "Queue overloaded" << endl;
        }
        else{
            rear++;
            arr[rear] = element;
            cout << element << " push successfully" << endl;
        }
    }

    void push_front(int element){
        if(front == 0){
            cout << "Queue Overflow" << endl;
        }
        else if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[front] = element;
            cout << element << " push successfully" << endl;
        }
        else{
            front--;
            arr[front] = element;
            cout << element << " push successfully" << endl;
        }
    }

    void pop_rear(){
        if(front == -1 && rear == -1){
            cout << "Queue underflow" << endl;
        }
        else if(front == rear){
            cout << arr[rear] << " pop successfully" << endl;
            front = -1;
            rear = -1;
        }
        else{
            cout << arr[rear] << " pop successfully" << endl;
            rear--;
        }
    }

    void pop_front(){
        if(front == -1 && rear == -1){
            cout << "Queue Underflow" << endl;
        }
        else if(front == rear){
            cout << arr[front] << " pop successfully" << endl;
            front = -1;
            rear = -1;
        }
        else{
            cout << arr[front] << " pop successfully" << endl;
            front++;
        }
    }
};

int main(){
    Dequeue dq(3);

    dq.push_front(10);
    dq.push_rear(30);
    dq.push_rear(20);
}
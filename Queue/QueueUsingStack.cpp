#include<bits/stdc++.h>
using namespace std; 

class MyQueue{
public:
    stack<int>st1, st2;

    void push(int data){
        st1.push(data);
    }

    int pop(){
        int popped = -1;

        if(!st2.empty()){
            popped = st2.top();
            st2.pop();
        }
        else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            popped = st2.top();
            st2.pop();
        }
        return popped;
    }

    int peek(){
        int front = -1;

        if(!st2.empty()){
            front = st2.top();
        }
        else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            front = st2.top();
        }
        return front;
    }

    bool empty(){
        return st1.empty() && st2.empty();
    }

};

int main(){
    MyQueue q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.pop() << endl;
    cout << q.pop() << endl;
}
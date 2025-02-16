#include<iostream>
using namespace std;

class stack{
    public:

    int *arr;
    int size ;
    int top;

    stack( int capacity){
        arr = new int [capacity];
        size = capacity;
        top = -1;
    }

    void push(int val){
        if(top == size-1){
            cout << "Stack overflow" << endl;
        }
        else{
            top++;
            arr[top] = val;
            cout << "push successfull" << endl;
        }
    }

    void pop(){
        if(top == -1){
            cout << "stack underflow" << endl;
        }
        else{
            arr[top] = -1;
            top--;
            cout << "pop successfull" << endl;
        }
    }

    int getsize(){
        cout << top + 1 << endl;
        return top+1;
    }

    bool isEmpty(){
        if(top == -1){
            cout << "Stack is Empty " << endl;
            return true;
        }
        else{
            cout << "stack is not Empty " << endl;
            return false;
        }
    }

    bool isFull(){
        if(top == size-1){
            cout << "Stack is Full" << endl;
            return true;
        }
        else{
            cout << "Stack is not Full" << endl;
            return false;
        }
    }

    int Top(){
       if(top == -1 ){
        cout << "Stack is empty no top element";
       }
       else{
        cout << arr[top] << endl;
        return arr[top];
       } 
    }

  
    
};

int main(){
    stack st(5);
  

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    st.getsize();
    
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();

    st.getsize();
    st.isEmpty();

}
#include<iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;

    stack(int capacity){
        arr = new int [capacity];
        size = capacity;
        top1 = -1;
        top2 = size;
    }

    void push1(int value){
        if(top2 - top1 == 1){
            cout << "Stack1 overflow" << endl;
        }
        else{
            top1++;
            arr[top1] = value;
            cout << "push in Stack 1" << endl;
        }
    }

    void push2(int value){
        if(top2 - top1 == 1){
            cout << "Stack2 overflow" << endl;
        }
        else{
            top2--;
            arr[top2] = value;
            cout << "push in stack2 " << endl;
        }
    }

    void pop1(){
        if(top1 == -1){
            cout << "Stack1 underflow " << endl;
        }
        else{
            arr[top1] = -1;
            top1--;
            cout << "pop in stack1" << endl;
        }
    }

    void pop2(){
        if(top2 == size){
            cout << "Stack2 overflow" << endl;
        }
        else{
            arr[top2] =-1;
            top2++;
            cout << "pop in stack2" << endl;
        }
    }
};

int main(){
    stack st(5);
    st.push1(10);
    st.push2(50);

    st.push1(20);
    st.push2(40);

    st.push1(30);
    st.push2(35);


}


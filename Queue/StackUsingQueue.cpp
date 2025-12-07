#include<bits/stdc++.h>
using namespace std;

class myStack{
public:
    queue<int>q;


    void push(int x){
        q.push(x);


        // reversing
        for(int i=0; i<q.size()-1; i++){
            auto front = q.front();
            q.pop();
            q.push(front);
        }
    }

    int pop(){
        auto top = q.front();
        q.pop();

        return top;
    }

    int top(){
        if(q.empty()) return -1;
        return q.front();
    }

    bool empty(){
        return q.empty();
    }
};

int main(){
    myStack st;
    st.push(10);
    st.push(20);


    cout << st.top() << endl;
    cout << st.pop() << endl;
}
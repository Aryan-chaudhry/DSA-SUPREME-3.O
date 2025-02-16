#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int>&q){
    stack<int>st;

    while(!q.empty()){
        int element = q.front();
        q.pop();

        st.push(element);
    }

    while(!st.empty()){
        int element = st.top();
        st.pop();

        q.push(element);
    }
}

void reverseQueueRec(queue<int>&q){
    // base case 
     if(q.empty()){
        return;
     }
     // ek case me solve karunga bakke recursion dekh lega
     int frontElement = q.front();
     q.pop();

     reverseQueueRec(q);
     // backtracking
     q.push(frontElement);
}

int main(){
    queue<int>q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    reverseQueueRec(q);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}

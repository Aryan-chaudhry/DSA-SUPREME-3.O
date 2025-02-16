#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseInKgroup(queue<int>&q, int k, int size){

    if(size >= k){
        stack<int>st;
        for(int i=0; i<k; i++){
            int element = q.front();
            q.pop();

            st.push(element);
        }

        for(int i=0; i<k; i++){
            int element = st.top();
            st.pop();
            q.push(element);
        }
        reverseInKgroup(q, k, size-k);
    }
    else{
        for(int i=0; i<size; i++){
            int element = q.front();
            q.pop();
            q.push(element);
        }
    }

}

int main(){
    queue<int>q;

    q.push(0);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);

    int size = q.size();
    int k = 3;

    reverseInKgroup(q, k, size);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

}
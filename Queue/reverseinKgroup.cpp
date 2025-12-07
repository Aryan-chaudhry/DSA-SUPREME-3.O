#include<bits/stdc++.h>
using namespace std;

void reverseinKgroup(queue<int>&q, int k){
   vector<int>store;

   for(int i=1; i<=k; i++){
    store.push_back(q.front());
    q.pop();
   }

   reverse(store.begin(), store.end());

   while(!q.empty()){
    store.push_back(q.front());
    q.pop();
   }

   for(auto no : store){
    q.push(no);
   }
}

int main(){
    queue<int>q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k = 3;

    reverseinKgroup(q, k);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}
#include<bits/stdc++.h>
using namespace std;

void interleave(queue<int>&q){
    vector<int>first;
    vector<int>second;

    int half = q.size()/2;

    while(q.size() != half && !q.empty()){
        first.push_back(q.front());
        q.pop();
    }

    while(!q.empty()){
        second.push_back(q.front());
        q.pop();
    }

    int i=0;
    int j=0;

    while(i < first.size() && j < second.size()){
        q.push(first[i]);
        q.push(second[j]);
        i++;
        j++;
    }

    while(i < first.size()){
        q.push(first[i]);
        i++;
    }

    while(j < second.size()){
        q.push(second[j]);
        j++;
    }
}

int main(){
    queue<int>q;

    q.push(2);
    q.push(4);
    q.push(3);
    q.push(1);

    interleave(q);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

}
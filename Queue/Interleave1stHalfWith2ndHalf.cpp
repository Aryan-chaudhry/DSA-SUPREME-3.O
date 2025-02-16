#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void interleave(queue<int>&q, int size, queue<int>&firstHalf){
    int AnsSize = size;
    vector<int>Ans;
    while(size--){
       Ans.push_back(firstHalf.front());
       firstHalf.pop();

       Ans.push_back(q.front());
       q.pop();
    }

    for(int i=0; i<AnsSize; i++){
        cout << Ans[i] << " ";
    }
}

int main(){

    queue<int>q;

    q.push(2);
    q.push(4);
    q.push(3);
    q.push(1);

    int size = q.size();
    int half = size/2;

    queue<int>firstHalf;

    while(half--){
        int element = q.front();
        q.pop();

        firstHalf.push(element);
    }
        
    cout << endl <<  "q size : " << q.size() << endl;
    cout << "firsthalf size : " << firstHalf.size() << endl;


    interleave(q, size, firstHalf);
    

return 0;
}
#include<iostream>
using namespace std;

class Node{
    public:

    Node*prev;
    int data;
    Node*next;

    Node(int value){
        this -> prev = NULL;
        this -> data = value;
        this -> next = NULL;
    }

};

int main(){
    
    Node*newNode = new Node(10);
    
    return 0;
}
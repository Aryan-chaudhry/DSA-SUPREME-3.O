#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    // constructor
        Node(int value){
            this -> data = value;
            this -> next = NULL;
        }



};

int main(){
    // using static memmory
    //Node first;
    // using dynamic memmory
    Node*first = new Node(10);
}
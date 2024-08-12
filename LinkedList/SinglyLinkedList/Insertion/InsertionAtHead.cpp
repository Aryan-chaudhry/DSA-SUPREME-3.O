#include<iostream>
using namespace std;


class Node{
    public:
    
    int data;
    Node*next;

    Node(int value){
        this -> data = value;
        this -> next = NULL;
    }
};

Node* insertionAtHead(int value, Node*&head, Node*&tail){

    // if linkedlist is empty
    if(head == NULL && tail == NULL){
        // create a first Node
        Node* newNode = new Node(value);
        // head ko node par laga do
        head =  newNode;
        // tail ko node par laga do
        tail = newNode;  
    }
    else{
    // creata a  Node of linked list
    Node*newNode = new Node(value);
    // link it to heads Node
    newNode -> next = head;
    // update head
    head = newNode;

    }
    return head;
}

void print(Node*&head){
    Node*temp = head;
    while(temp !=   NULL){
        cout << temp -> data << " ->" << " ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}


int main(){
    Node*head = NULL;
    Node*tail = NULL;

    head = insertionAtHead(10, head, tail);
    head = insertionAtHead(20, head, tail);
    head = insertionAtHead(30, head, tail);

    print(head);

    return 0;
}
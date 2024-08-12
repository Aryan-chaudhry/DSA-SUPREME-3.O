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

Node* insertionAtTail(Node*&head, Node*&tail, int value){
    // if linkedlist is empty
    if(head == NULL && tail == NULL){
        // create a node
        Node* newNode = new Node(value);
        // link head to it
        head = newNode;
        // link tail to it
        tail = newNode;
    }
    else{
        // create a new Node
        Node*newNode = new Node(value);
        // link tail of previous node to it
        tail -> next = newNode;
        // update tail to the end Node'
        tail = newNode;
    }
    return head;
}

void print(Node*&head){
    Node*temp = head;
    while(temp != NULL){
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}
int main(){
    Node*head = NULL;
    Node*tail = NULL;

    print(head);

    insertionAtTail(head, tail, 10);
    print(head);


    insertionAtTail(head, tail, 20);
    print(head);

    insertionAtTail(head, tail, 30);
    print(head);

    return 0;
}

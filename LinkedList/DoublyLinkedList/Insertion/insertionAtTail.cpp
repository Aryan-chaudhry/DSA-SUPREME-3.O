#include<iostream>
using namespace std;

class Node{
    public:

    Node*prev = NULL;
    int data;
    Node*next = NULL;

    Node(int value){
        this -> prev = NULL;
        this -> data = value;
        this -> next = NULL;
    }
};

Node* insertAtTail(Node*&head, Node*&tail, int value){
    // if linkedlist is empty
    if(head == NULL && tail == NULL){
        // create a new Node
        Node*newNode = new Node(value);
        // point head pointer  to it
        head = newNode;
        // point tail pointer to it
        tail = newNode;
    }
    else{
    // Linkedlist is not empty

    // create a new Node
    Node*newNode = new Node(value);
    // link tail next to new Node
    tail -> next = newNode;
    // link newNode prev to tail 
    newNode -> prev = tail;
    // update tail 
    tail = newNode;
    }

    return head;
}

void print(Node*&head){
    Node*temp = head;
    while(temp != NULL){
        cout<< temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

void Printreverse(Node*&tail){
    Node*temp = tail;
    while(temp != NULL){
        cout << temp -> data << " -> ";
        temp = temp -> prev;
    }
    cout << "NULL" << endl;
}

int main(){
    Node*head = NULL;
    Node*tail = NULL;

    head = insertAtTail(head, tail, 10);
    // 10 -> NULL

    head = insertAtTail(head, tail, 20);
    // 10 -> 20 -> NULL

    head = insertAtTail(head, tail, 30);
    // 10 -> 20 -> 30 -> NULL

    print(head);
   

    return 0;
}
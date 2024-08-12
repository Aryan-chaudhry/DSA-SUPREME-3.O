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

Node* insertAtHead(Node*&head, Node*&tail, int value){
    // if linkedlist is empty
    if(head == NULL && tail == NULL){
        // creata new Node
        Node*newNode = new Node(value);
        // point head and tail pointer to it
        head = newNode;
        tail = newNode;
    }
    else{
        // linked list is not empty 
        Node*newNode = new Node(value);
        // link next pointer of new Node to head
        newNode -> next = head;
        // link prev pointer of head node to newNode
        head -> prev = newNode;
        // update head
        head = newNode;
        
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

    print(head);
    //  NULL

    head = insertAtHead(head, tail, 10);
    print(head);
    // 10 -> NULL

    head = insertAtHead(head, tail, 20);
    print(head);
    // 20 -> 10 -> NULL

    head = insertAtHead(head, tail, 30);
    print(head);
    // 30 -> 20 -> 10 -> NULL

    Printreverse(tail);
    // 10 -> 20 -> 30 -> NULL

    return 0;
}
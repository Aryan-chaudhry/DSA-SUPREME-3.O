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

int getLength(Node* &head){
    Node*temp = head;
    int length = 0;

    while(temp != NULL){
        temp = temp -> next;
        length++;
    }

    return length;
}

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

Node* insertAtPosition(Node* &head, Node* &tail, int position, int value){
    int length = getLength(head);

    if(position == 1){
        head = insertionAtHead(value, head, tail);
    }
    else if(position == (length + 1)){
        insertionAtTail(head, tail, value);
    }
    else{
        // insert in between 
      
      // create a temp pointer
       Node*temp = head;
       // temp ko position-1 par lekar jao
       for(int i=0; i<position-2; i++){
            temp = temp -> next;
       }
       // create a new node
       Node*newNode = new Node(value);
       // link karo
       newNode -> next = temp -> next;
       temp -> next = newNode;
    }
    return head;
}

int searching(Node*&head, int target){
    Node*temp = head;
    int pos = 1;
    while(temp != NULL){
        if(temp -> data == target){
            return pos;
            break;
        }
        temp = temp -> next;
        pos++;
    }
    return pos;
}

void print(Node*&head){
    Node*temp = head;

    while(temp != NULL){
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}


Node* plusOne(Node* &head){
 // Complete the Function
}

int main(){

    Node*head = NULL;
    Node*tail = NULL;

    insertAtPosition(head, tail, 1, 9);
    insertAtPosition(head, tail, 2, 9);
    insertAtPosition(head, tail, 3, 9);
     
     cout << endl << endl;
    print(head);
     cout << endl << endl;

    Node*myhead =  plusOne(head);
    print(myhead);
  

    return 0;
}
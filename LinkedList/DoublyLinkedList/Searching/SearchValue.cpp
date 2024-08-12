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

int getLength(Node*&head){
    Node*temp = head;
    int length = 0;

    while(temp != NULL){
        length++;
        temp = temp -> next;
    }
    return length;
}

Node* insertATPosition(Node*&head, Node*&tail, int position, int value){
    
    int length = getLength(head);
    
    // case 1 insert at position 1
    if(position == 1){
        // head par insert karo
        insertAtHead(head, tail, value);
    }
    else if(position == (length+1)){
        // tail par insert karo
        insertAtTail(head, tail, value);
    }
    else{
        // middle me kisi position pe insert karna chahta hu

        // ***** SEE NOTES if not understand ***** 
        Node*temp = head;
        // point temp to position-2
        for(int i=0; i<position-2; i++){
            temp = temp -> next;
        }
        // create new node
        Node*newNode = new Node(value);
        // set pointer to temp next node
        Node*forward = temp -> next;
        // set pointers
        newNode -> prev = temp;
        temp -> next = newNode;
        forward -> prev = newNode;
        newNode -> next = forward;
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

bool SearchTarget(Node*&head, int target){

    Node*temp = head;

    while(temp != NULL){
        if(temp -> data == target){
            return true;
            break;
        }
        temp = temp -> next;
    }

    return false;
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
    
    head = insertATPosition(head, tail, 2, 15);
    print(head);
    // 10 -> 15 -> 20 -> 30 -> NULL

    int target;
    cout << "Enter target : ";
    cin >> target;

    bool ans = SearchTarget(head, target);
    cout << ans << endl;
    
    return 0;
}


#include<iostream>
using namespace std;

class Node{
public:

    int val;
    Node*left;
    Node*right;

    Node(int value){
        this -> val = value;
        this -> left = NULL;
        this -> right = NULL;
    }
};

class LL{
    public:

    int data;
    LL * next;

    LL(int val){
        this -> data = val;
        this ->next = NULL;
    }
};

Node* buildTree(){

    int data;
    cout << "Enter the value for Node : ";
    cin >> data;

    // create a node
    Node*root = new Node(data);

    if(data == -1){
        return NULL;
    }
    else{
        cout << "Enter the value of node at left of : " << data << endl;
        root -> left = buildTree();

        cout << "Enter the value of node at right of : " << data << endl;
        root -> right = buildTree();
    }
    return root;
}

void Preorder(Node*&root){
    if(root == NULL) return;

    cout << root -> val << " ";
    Preorder(root -> left);
    Preorder(root -> right);

}

void createLinkedList(LL*&node, LL*&head, LL*&tail){
    
    if(head == NULL && tail == NULL){
        // means empty
        // so point them on same node
        head = node;
        tail = node;
    }
    else{
        tail -> next = node;
        // update tail
        tail = tail -> next;
    }
}

void PreOrder_to_LinkedList(Node* &root, LL*&head, LL*&tail){
    if(root == NULL){
        return; 
    }

    
    LL* node = new LL(root -> val);
    createLinkedList(node, head, tail);
    PreOrder_to_LinkedList(root -> left, head, tail);
    PreOrder_to_LinkedList(root -> right, head, tail);

}

void printLinkedList(LL* &head){
    LL * temp = head;

    while(temp != NULL){
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << " NULL" << endl;
}

int main(){
    Node*root = buildTree();

    LL * head = NULL;
    LL * tail = NULL;
    cout << endl << "printing Tree" << endl;
    Preorder(root);
    cout << endl;
    PreOrder_to_LinkedList(root, head, tail);
    cout << endl;
    cout << "head : " << head -> data << endl;
    cout << "tail : " << tail -> data << endl;
    cout << "printing LinkedList from preorder Traversal" << endl;
    printLinkedList(head);
}

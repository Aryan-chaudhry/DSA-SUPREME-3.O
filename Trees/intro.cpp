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
int main(){
    Node*root = buildTree();
}
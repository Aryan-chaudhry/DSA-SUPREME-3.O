#include<iostream>
#include<queue>
#include<stack>
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
        cout << "Enter the value of node at left of : " << root -> val << endl;
        root -> left = buildTree();

        cout << "Enter the value of node at right of : " << root -> val  << endl;
        root -> right = buildTree();
    }
    return root;
}

void preorder(Node* &root){

    if(root == NULL){
        return;
    }

    cout << root -> val << " ";
    preorder(root -> left);
    preorder(root -> right);
}

void inorder(Node* &root){
     
     if(root == NULL){
        return;
     }

     inorder(root -> left);
     cout << root -> val << " ";
     inorder(root -> right);

}

void Postorder(Node* &root){

    if(root == NULL){
        return;
    }

    Postorder(root -> left);
    Postorder(root -> right);
    cout << root -> val << " ";

}

void levelorderLTR(Node* &root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        Node*temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp -> val << " ";
            if(temp -> left != NULL){
                q.push(temp -> left);
            }
            if(temp -> right != NULL){
                q.push(temp -> right);
            }
        }
    }
}

void levelorderRTL(Node* &root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        Node*temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp -> val << " ";
            if(temp -> right != NULL){
                q.push(temp -> right);
            }
            if(temp -> left != NULL){
                q.push(temp -> left);
            }
        }
    }
}



int main(){
    Node*root = buildTree();
    cout << endl;
     
    
    // Traversal
    cout << "preorder : " << endl;
    preorder(root);
    cout << endl << endl;

    cout << "Inorder : " << endl;
    inorder(root);
    cout << endl << endl;

    cout << "postorder : " << endl;
    Postorder(root);
    cout << endl << endl;

    cout << "levelorder from left to right : " << endl;
    levelorderLTR(root);
    cout << endl;

    cout << "levelorder from right to left : " << endl;
    levelorderRTL(root);
    cout << endl;

    

}
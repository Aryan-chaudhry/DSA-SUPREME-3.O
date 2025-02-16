#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node*left;
    Node*right;

    Node(int value){
        this -> data = value;
        // this -> left = NULL;
        // this -> right = NULL;
        left = NULL;
        right = NULL;
    }
};

// O(logn)
Node* buildBST(int value, Node* root){

    if(root == NULL){
        root = new Node(value);
        return root;
    }
    else{
        if(value < root -> data){
            root -> left = buildBST(value, root -> left);
        }
        else{
           root -> right =  buildBST(value, root -> right);
        }
    }
    return root;
}

// O(height)
void createTree(Node* &root){
    cout << "Enter the value for Node : ";
    int val;
    cin >> val;


    while(val != -1){
            root = buildBST(val, root);
            cout << "Enter the value for Node : ";
            cin >> val;
    }

}

// O(n)
void preOrder(Node* root){

    if(root == NULL){
        return;
    }

    cout << root -> data << " ";
    preOrder(root -> left);
    preOrder(root -> right);

}

// O(n)
void InOrder(Node* root){

    if(root == NULL){
        return;
    }

    InOrder(root -> left);
    cout << root -> data << " ";
    InOrder(root -> right);
    
}

// O(n)
void postOrder(Node* root){

    if(root == NULL){
        return;
    }

    postOrder(root -> left);
    postOrder(root -> right);
    cout << root -> data << " ";
    
    
}

// O(n)
void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node*front = q.front();
        q.pop();

        if(front == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << front -> data << " ";
             if(front -> left){
                q.push(front -> left);
            }
            if(front -> right){
                q.push(front -> right);
            }
        }
    }
}

// O(height)
int getMin(Node* root){

    if(root == NULL){
        return -1;
    }

    while(root -> left != NULL){
        root = root -> left;
    }

    // i am stand at last left node
    return root -> data;
}

// O(height)
int getMax(Node* root){
    if(root == NULL){
        return -1;
    }

    while(root -> right != NULL){
        root = root -> right;
    }

    return root -> data;
}

// O(logn)
bool Search(Node* root, int target){
    
    if(root == NULL){
        return false;
    }

    if(root -> data == target){
        return true;
    }
    else{

        if(target <  root -> data){
          bool leftAns =  Search(root -> left, target);
          if(leftAns == true){
            return true;
          }
        }
        else{
           bool rightAns =  Search(root -> right, target);
           if(rightAns == true){
            return true;
           }
        }
    }
    return false;
}



int main(){
    
    Node*root = NULL;
    createTree(root);

    cout << "Printing level order traversal" << endl;
    levelOrderTraversal(root);

    cout << endl << endl << "Inorder" << endl;
    InOrder(root);

    cout << endl << endl << "preorder" << endl;
    preOrder(root);

    cout << endl << endl << "postorder" << endl;
    postOrder(root);

    cout << endl << endl;
    int minNode = getMin(root);
    cout << "Minimum Node in BST is : " << minNode << endl;
    cout << endl;

    int maxNode = getMax(root);
    cout << "Maximum Node in BST is : " << maxNode << endl;
    cout << endl;

    int target;
    cout << "Enter the vaue of Node to search in BST :";
    cin >> target;
    bool find = Search(root, target);

    if(find){
        cout << target  << " Node found in BST" << endl;
    }
    else{
        cout << target << " Node not found in BST" << endl;
    }

    return 0;
}

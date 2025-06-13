#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:

    int data;
    TreeNode*left;
    TreeNode*right;

    TreeNode(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

TreeNode* buildTree(){
    int data;
    cout << "Enter node value : ";
    cin >> data;

    TreeNode*root = new TreeNode(data);
    
    if(data == -1){
        return NULL;
    }
    else{
        cout << "Enter the value of Node that is left of " << root -> data << " : ";
        root -> left = buildTree();

        cout << "Enter the value of Node that is right of " << root -> data << " : ";
        root -> right = buildTree();
    }
    return root;
}

int main(){
    TreeNode*root = buildTree();
    
}


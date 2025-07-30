#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    //node with null pointer
    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};
//inorder Left RootNode  Right(LNR)
Node* createTree(){
    // cout << "Enter the data (-1 for null): ";
    int data;cin>>data;

    //base case
    if(data==-1){
        return NULL;
    }

    // step 1 : create Node
    Node* root = new Node(data);
    // step 2 : create left node
    // cout << "Left node of :"<<root->data<<endl;
    root->left=createTree();
    // step 3 : create Right Node
    // cout << "Right node of :"<<root->data<<endl;
    root->right=createTree();
    return root;

}


void inorder(Node* root){
    //base case
    if(root==NULL){
        return;
    }
    
    //left node
    inorder(root->left);
    //data
    cout << root->data << " ";
    //right node
    inorder(root->right);
}

void preorder(Node* root){
    //base case
    if(root==NULL){
        return;
    }
    
    //data
    cout << root->data << " ";
    //left node
    preorder(root->left);
    //right node
    preorder(root->right);
}


void postorder(Node* root){
    //base case
    if(root==NULL){
        return;
    }
    
    //left node
    postorder(root->left);
    //right node
    postorder(root->right);
    //data
    cout << root->data << " ";
}

int main() {
    Node * root=createTree();
    // cout << "Root node is :"<<root->data << endl;
    cout << "Printing Tree in Inorder Format :";
    inorder(root);
    cout <<endl<<"Printing Tree in preorder Format :";
    preorder(root);
    cout <<endl<< "Printing Tree in Postorder Format :";
    postorder(root);
    return 0;
}


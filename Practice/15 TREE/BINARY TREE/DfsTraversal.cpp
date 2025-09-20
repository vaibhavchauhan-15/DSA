// ******************USING INORDER ****************
#include<iostream>
using namespace std;

class Node{ 
    public:
    //create node
    int data;
    Node* left;
    Node* right;


    Node(int value){
        this->data=value;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* createtree(){
    // cout<<"Enter a valid Number (-1 for NULL node):";
    int data;
    cin>>data;
    
    //create new node
    Node* root = new Node(data);
    
    //base case
    if(data==-1){
        return NULL;
    }
    
    //set data
    root->data=data;
    //set left node data
    // cout<<"Enter left node of:"<<root->data<<endl;
    root->left=createtree();
    //set right node data
    // cout<<"Enter right node of:"<<root->data<<endl;
    root->right=createtree();
    
}


void Inorder(Node* root){
    // LNR
    ///bse case
    if(root == NULL){
        return;
    }
    //L
    Inorder(root->left);
    //N
    cout<<root->data<<" ";
    
    //R
    Inorder(root->right);
    
}
void Preorder(Node* root){
    //NLR
    // base case
    if(root == NULL){
        return;
    }
    
    //N
    cout<<root->data<<" ";
    //L
    Preorder(root->left);
    //R
    Preorder(root->right);
}

void Postorder(Node* root){
    // LRN
    // BASECASE
    if(root == NULL){
        return;
    }
    
    //L
    Postorder(root->left);
    //R
    Postorder(root->right);
    //N
    cout<<root->data<<" ";
}
int main(){
    cout<<"Enter valid node (-1 for null node) :";
    Node* root = createtree();
    cout<<"Root node is :"<<root->data<<endl;
    cout<<"Inorder Traversal is :";
    Inorder(root);
    cout<<endl;
    cout<<"Preorder Traversal is :";
    Preorder(root);
    cout<<endl;
    cout<<"Postorder Traversal is :";
    Postorder(root);
    cout<<endl;
}
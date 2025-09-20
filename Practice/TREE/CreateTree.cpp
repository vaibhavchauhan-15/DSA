#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data=val;
        this->left=NULL;
        this->left=NULL;
    }
};

Node* createTree(){
    int data;cin>>data;
    //base case
    if(data==-1){
        return NULL;
    }
    //using inorder
    //1 create root node
    Node* root = new Node(data);
    //2 left child
    root->left= createTree();
    //3 right child
    root->right= createTree();
    return root;
}
//print tree
void inorder(Node* root){
    //base case
    if(root==NULL){
        return;
    }
    //go left
    inorder(root->left);
    //print data
    cout<<root->data << " ";
    //go right
    inorder(root->right);
}
int main() {
    Node* root=createTree() ;
    cout<<"Printing Tree in Inoder Format : ";
    inorder(root);
    return 0;
}
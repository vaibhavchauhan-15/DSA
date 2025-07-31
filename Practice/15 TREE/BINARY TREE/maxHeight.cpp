#include <iostream>
#include<math.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* createTree(){//using inorder
    int data;cin>>data;
    
    if(data==-1){
        return NULL;
    }
    //create New node
    Node* root=new Node(data);

    //create left child
    root->left=createTree();
    //create right child
    root->right=createTree();
    return root;
}

int maxHeight(Node* root){

    //base case
    if(root==NULL){
        return 0;
    }

    int leftHeight=maxHeight(root->left);
    int rightHeight=maxHeight(root->right);

    int ans=max(leftHeight , rightHeight)+1;
    return ans;
}

int main() {
    Node* root=createTree();
    cout << "Maximum Height of the Tree :"<<maxHeight(root) << endl;
    return 0;
}
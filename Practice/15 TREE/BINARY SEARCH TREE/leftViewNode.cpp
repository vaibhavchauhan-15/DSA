#include <iostream>
using namespace std;

//node
class NODE{
    public:
    NODE* left;
    NODE* right;
    int data;

    NODE(int value){
        this->data=value;
        this->left=NULL;
        this->right=NULL;
    }
};

//create tree

NODE* createTree(){
    int data;cin>>data;
    //base case
    if(data==-1){
        return NULL;
    }
    //create node
    NODE* root = new NODE(data);
    //left node
    root->left=createTree();
    //right node
    root->right=createTree();

    return root;
}

//print tree in inorder
void printTree(NODE* root){
    //base case
    if(root==NULL){
        return;
    }

    //left
    printTree(root->left);
    //data
    cout<<root->data<<" ";
    //right
    printTree(root->right);

}


//print node in level order 

int main() {
    NODE* root = createTree();
    cout << "Printing Tree in Inorder :";
    printTree(root);
    return 0;
}
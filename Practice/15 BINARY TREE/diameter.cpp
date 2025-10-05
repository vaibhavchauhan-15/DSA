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
        this->right=NULL;
    }
};

Node* creatTree(){
    int val;cin>>val;
    if(val==-1){
        return NULL;
    }

    Node* root = new Node(val);
    root->left=creatTree();
    root->right=creatTree();
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

int diameter(Node* root){
    //base case
    if(root==NULL){
        return 0;
    }
    int op1=diameter(root->left);
    int op2=diameter(root->right);
    int op3= maxHeight(root->left) + maxHeight(root->right);
    int ans = max(op1 , max(op2 , op3));
    return ans;
}

int main() {
    Node* root = creatTree();
    cout << "Diameter of tree : "<<diameter(root) << endl;
    return 0;
}
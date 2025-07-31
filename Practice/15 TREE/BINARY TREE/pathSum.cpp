#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data=val;
        this->left=nullptr;
        this->right=nullptr;
    }
};

Node* createTree(){
    int val;cin>>val;

    if(val==-1){
        return nullptr;
    }

    Node* root = new Node(val);

    root->left=createTree();
    root->right=createTree();

    return root;
}



int main() {
    
    return 0;
}
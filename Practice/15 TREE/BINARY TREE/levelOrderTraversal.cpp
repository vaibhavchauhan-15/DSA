#include <iostream>
#include<queue>
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
    int data;cin>>data;
    if(data==-1){
        return NULL;
    }

    Node* root = new Node(data);
    root->left=creatTree();
    root->right=creatTree();
    return root;
}


void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);


    //start traversal
    while(!q.empty()){
        Node* front = q.front();
        q.pop();

        //print data
        cout << front->data <<" ";
        if(front->left!=NULL){
            q.push(front->left);
        }
        if(front->right!=NULL){
            q.push(front->right);
        }
    }
}
int main() {
    Node* root = creatTree();
    cout << "Printing Tree in Level Order : ";
    levelOrderTraversal(root);
    return 0;
}
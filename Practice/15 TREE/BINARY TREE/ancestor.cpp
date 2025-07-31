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

Node* createTree(){
    int val;cin>>val;
    
    if(val==-1){
        return NULL;
    }

    Node* root =new Node(val);

    root->left=createTree();
    root->right=createTree();
    return root;

}

class Solution {
public:
    Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
        //base case
        if(root == NULL) return NULL; 
        if(root->data==p->data) return p;
        if(root->data==q->data) return q;

        Node* left = lowestCommonAncestor(root->left , p , q);
        Node* right = lowestCommonAncestor(root->right , p , q);

        if(left==NULL && right==NULL) return NULL;
        else if(left!=NULL && right==NULL) return left;
        else if(left==NULL && right!=NULL) return right;
        else return root;
    }
};


Node* findNode(Node* root ,int  val){
    if(root==NULL) return NULL;
    if(root->data==val) return root;

    Node* left = findNode(root->left , val);
    if(left!=NULL) return left;
    return findNode(root->right , val);
}



int main() {
    cout << "Enter Nodes : ";
    Node* root = createTree();
    cout << "Enter P and Q :";
    int pVal , qVal;cin>>qVal>>pVal;
    
    Node* p = findNode(root , pVal) ;
    Node* q = findNode(root , qVal);

    Solution sc;
    Node* ans = sc.lowestCommonAncestor(root,p,q);

    if(ans!=NULL) cout << "LCA is : " <<ans->data<< endl;
    else cout << "LCA is : " << "None" << endl;
    return 0;
}
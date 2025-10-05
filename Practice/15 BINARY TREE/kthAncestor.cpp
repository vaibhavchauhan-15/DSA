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


int findAncestor(Node* root , int k , int val ,int& ans){
    //base case
    if(root==NULL) return -1 ;
    
    if(root->data==val){
        return 0;
    }
    int leftDis = findAncestor(root->left , k ,val ,  ans);
    int rightDis = findAncestor(root->right , k ,val ,  ans);

    if(leftDis!=-1){
        if(leftDis+1 == k ) ans = root->data;
        return leftDis+1;
    }
    if(rightDis!=-1){
        if(rightDis+1 == k ) ans = root->data;
        return rightDis+1;
    }

    return -1;
}

int main() {
    cout << "Enter Nodes (-1 for Null) : ";
    Node* root = createTree();
    int val;
    cout << "Enter Node Value to Find Ancestor :";
    cin>>val;
    int k;
    cout << "Enter K Value : ";
    cin>>k;
    int ans =0 ;
    if(findAncestor(root , k ,val ,  ans)==-1){
        cout<<"Kth Ancestor of Not Exist!!"<<endl; 
    }
    else{
       cout<<"This is the Kth Ancestor of ("<<val<< ") is :"<<ans<<endl; 
    }

    return 0;
}
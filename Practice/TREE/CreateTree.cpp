// ******************USING INORDER ****************LNR
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

int main(){
    cout<<"Enter valid node (-1 for null node) :";
    Node* root = createtree();
    cout<<"Root node is :"<<root->data<<endl;

}
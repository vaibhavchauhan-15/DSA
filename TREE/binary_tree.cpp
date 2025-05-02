// // ***************** CREATE TREE ******************
// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     //create node
//     int data;
//     Node* left;
//     Node* right;


//     Node(int value){
//         this->data=value;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };

// Node* createtree(){
//     cout<<"Enter a valid Number (-1 for NULL node):";
//     int data;
//     cin>>data;
    
//     //create new node
//     Node* root = new Node(data);
    
//     //base case
//     if(data==-1){
//         return NULL;
//     }

//     //set data
//     root->data=data;
//     //set left node data
//     cout<<"Enter left node of:"<<root->data<<endl;
//     root->left=createtree();
//     //set right node data
//     cout<<"Enter right node of:"<<root->data<<endl;
//     root->right=createtree();

// }

// int main(){
//     Node* root=createtree();
//     cout<<"root node is:"<<root->data<<endl;

// }



// ************************** Traversal Technique********************

// DFS 
//     inorder(L,ROOT,R)
//     Peorder(ROOT , L ,R)
//     POSTORDER( L , R , ROOT)


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
    cout<<"Enter a valid Number (-1 for NULL node):";
    Node* root=createtree();
    
    cout<<"Inorder tree are :";
    Inorder(root);
    cout<<endl;
    
    cout<<"Preorder tree are :";
    Preorder(root);
    cout<<endl;

    cout<<"postorder tree are :";
    Postorder(root);
    cout<<endl;


}


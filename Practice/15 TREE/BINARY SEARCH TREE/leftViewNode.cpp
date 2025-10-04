#include <iostream>
#include<queue>
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
void levelOrder(NODE* root){
    //base case
    // if(root==NULL) return;
    queue<NODE*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        NODE* temp = q.front();
        q.pop();
        
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }

}
int main() {
    NODE* root = createTree();
    cout << "Printing Tree in Inorder :";
    printTree(root);
    cout << endl;
    cout<<"Printing Tree in LevelOrder"<<endl;
    levelOrder(root);
    return 0;
}
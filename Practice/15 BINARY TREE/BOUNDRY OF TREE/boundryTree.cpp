#include <iostream>
#include<queue>
#include<vector>
#include<map>
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


void printLeftBoundry(NODE* root){
    //base case
    if(root==NULL) return;

    //leaf node
    if(root->left==NULL && root->right==NULL ) return;

    //print left boundry
    cout << root->data << " ";

    //agar left child nhi hai to right right child pe jao
    if(root->left!=NULL){
        printLeftBoundry(root->left);
    }else{
        printLeftBoundry(root->right);
    }
}

void printBottomBoundry(NODE* root){
    //base case
    if(root==NULL) return;

    // print leaf node
    if(root->left==NULL && root->right==NULL ) {
        cout <<root->data <<" ";
    }


    //agar left child nhi hai to right right child pe jao
    if(root->left!=NULL){
        printBottomBoundry(root->left);
    }if(root->right!=NULL){
        printBottomBoundry(root->right);
    }
}

void printrightBoundry(NODE* root){
    //base case
    if(root==NULL) return;

    //leaf node
    if(root->left==NULL && root->right==NULL ) return;

    
    //agar left child nhi hai to right right child pe jao
    if(root->right!=NULL){
        printrightBoundry(root->right);
    }else{
        printrightBoundry(root->left);
    }    
    //print left boundry while backtrack
    cout << root->data << " ";
}


void boundryTraversal(NODE* root){
    //base case
    if(root==NULL) return;
    cout << "Printing All Boundry Of the Tree :";
    printLeftBoundry(root);
    printBottomBoundry(root);
    //dont sent the root (avoid root printing again )
    if(root->right!=NULL){
        printrightBoundry(root->right);
    }else{
        printrightBoundry(root->left);
    }
}
int main() {
    
    //create the tree
    NODE* root = createTree();

    //print tree in levelorder
    cout << "Print tree in level order "<<endl;
    levelOrder(root);

    cout << endl;
    //print left boundry
    cout << "Printing left Boundry :";
    printLeftBoundry(root);

    cout << endl;

    cout << "Printing Bottom  Boundry :";
    printBottomBoundry(root);

    cout << endl;

    cout << "Printing Right Boundry :";
    printrightBoundry(root);

    cout << endl;

    boundryTraversal(root);
    
    return 0;
    
    //sample input
    //10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1
}
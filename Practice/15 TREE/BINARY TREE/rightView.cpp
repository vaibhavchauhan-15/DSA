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





void printRightView(NODE* root , int level , vector<int>& leftview ){
    //base case
    if(root==NULL){
        return;
    }

    if(level==leftview.size()){
        leftview.push_back(root->data);
    }

    printRightView(root->right , level+1 , leftview);
    printRightView(root->left , level+1 , leftview);
}



void printVector(vector<int>& data){
    for (int i = 0; i < data.size(); i++) {
        cout <<data[i]<< " ";     
    }
    return;
}
int main() {
    //vector for store the left and right view if not using vector then use count 
    vector<int> leftview;
    vector<int> rightview;

    //create the tree
    NODE* root = createTree();

    //print tree in levelorder
    cout << "Print tree in level order "<<endl;
    levelOrder(root);


    cout  << endl;

    //Fun call for right view
    printRightView(root , 0 , rightview);
    cout << "Priting right view :";
    printVector(rightview);

    cout << "" << endl;

    return 0;
    
    //sample input
    //10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1
}
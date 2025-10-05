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


void bottomView(NODE* root){
    //base case
    if(root==NULL) return;
    map<int , int > hdToNodeMap;//horizontal distance(hd)-> node data
    queue<pair<NODE* , int> > q;
    q.push(make_pair(root , 0));
    
    while(!q.empty()){
        //store first data
        pair<NODE* , int> temp = q.front();

        //pop the first data
        q.pop();
        //assign the data
        NODE* frontNode = temp.first;
        int hd = temp.second;

        //overwrite so deeper nodes can store
        hdToNodeMap[hd]=frontNode->data;
        //left child
        if(frontNode->left!=NULL){
            q.push(make_pair(frontNode->left, hd-1));
        }
        //right child
        if(frontNode->right!=NULL){
            q.push(make_pair(frontNode->right, hd+1));
        }

    }
    //print the data of map
    cout << "Printing the Bottom View :";
    for(auto i : hdToNodeMap){
        cout<<i.second<<" ";
    }
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

    cout<<endl;

    //bottom view
    bottomView(root);
    return 0;
    
    //sample input
    //10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1
}
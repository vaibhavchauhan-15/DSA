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

bool solve(Node* root , int targetSum , int sum){

    //base case
    if(root==nullptr) return false;
    sum+=root->data;
    if(root->left==nullptr && root->right==nullptr){
        //reach at leaf node
        //varify
        if(sum==targetSum) return true;
        else return false;
    }

    bool left = solve(root->left , targetSum , sum);
    bool right = solve(root->right , targetSum , sum);
    return left || right;

}

bool hasPathSum(Node* root, int targetSum) {
    int sum=0;
    bool ans = solve (root , targetSum , sum);
    return ans;
}



int main() {
    cout << "Enter Nodes in Preorder (-1 for NULLs): ";
    Node* root = createTree();
    int targetSum;
    cout<<"Enter Target Sum : ";
    cin>>targetSum;

    if(hasPathSum(root,targetSum)) cout << "Exist" << endl;
    else cout << "Not Exist" << endl;

    return 0;
}


// input examble
// nter Nodes in Preorder (-1 for NULLs): 5 4 11 7 -1 -1 2 -1 -1 -1 8 13 -1 -1 4 -1 7 -1 -1
// Enter Target Sum : 22
// Exist

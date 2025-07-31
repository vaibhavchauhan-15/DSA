#include <iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    vector<Node*> child;

    //constructor
    Node(int val){
        this->data=val;
    }

};

Node* createTree(){
    int val;
    cout << "Enter the Node value : ";
    cin>>val;
    
    Node* root = new Node(val);

    int n;
    cout << "Enter the Children of Node :"<<val << ":";
    cin>>n;

    for (int i = 0; i < n; i++) {
        cout << "Enter the child ("<<i+1<<") of node"<<val <<"\n";
        //create node
        Node* childNode=createTree();
        root->child.push_back(childNode);
    }

    return root;
    

}

void printTree(){

}

int main() {
    Node* root=createTree();
    cout << "Root node is :"<<root->data << endl;
    return 0;
}
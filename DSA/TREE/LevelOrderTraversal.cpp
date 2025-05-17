// #include<iostream>
// #include<queue>
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
//     // cout<<"Enter a valid Node (-1 for NULL node):";
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
//     // cout<<"Enter left node of:"<<root->data<<endl;
//     root->left=createtree();
//     //set right node data
//     // cout<<"Enter right node of:"<<root->data<<endl;
//     root->right=createtree();
    
// }

// int LevelOrderTraversal(Node* root){
//     queue<Node*> q;
//     q.push(root);

//     //traversal start
//     while(!q.empty()){
//         Node* front = q.front();
//         q.pop();
//         cout<<front->data<<" ";

//         if(front->left != NULL){
//             q.push(front->left);
//         }
//         if(front->right != NULL){
//             q.push(front->right);
//         }
//     }

// }




// int main(){
//     cout<<"Enter a valid Node (-1 for NULL node):";
//     Node* root = createtree();

//     cout<<"Printing LevelOrderTraversal:";
//     LevelOrderTraversal(root);

//     return 0;
// }


// ******************use NULL as marker *********************
#include<iostream>
#include<queue>
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
    // cout<<"Enter a valid Node (-1 for NULL node):";
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

int LevelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    //traversal start
    while(!q.empty()){
        Node* front = q.front();
        q.pop();
        
        
        if(front==NULL){
            //null node
            cout<<endl;
            if(q.empty()){
                q.push(NULL);       

            }
        }
        else{
            // valid node
            
            cout<<front->data<<" ";
            if(front->left != NULL){
                q.push(front->left);
            }
            if(front->right != NULL){
                q.push(front->right);
            }
        }

       
    }

}


int main(){
    cout<<"Enter a valid Node (-1 for NULL node):";
    Node* root = createtree();

    cout<<"Printing LevelOrderTraversal:";
    LevelOrderTraversal(root);

    return 0;
}

// *******************************use Null as height*********************
// #include<iostream>
// #include<queue>
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
//     // cout<<"Enter a valid Node (-1 for NULL node):";
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
//     // cout<<"Enter left node of:"<<root->data<<endl;
//     root->left=createtree();
//     //set right node data
//     // cout<<"Enter right node of:"<<root->data<<endl;
//     root->right=createtree();
    
// }

// int LevelOrderTraversal(Node* root){
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);
//     int n=0;//it measure height
//     //traversal start
//     while(q.size()>1){
//         Node* front = q.front();
//         q.pop();
        
        
//         if(front==NULL){
//             //null node
//             n++;
//             cout<<endl<<"Level "<<n<<endl;
//             q.push(NULL);       
//         }
//         else{
//             // valid node
            
//             cout<<front->data<<" ";
//             if(front->left != NULL){
//                 q.push(front->left);
//             }
//             if(front->right != NULL){
//                 q.push(front->right);
//             }
//         }

       
//     }

// }




// int main(){
//     cout<<"Enter a valid Node (-1 for NULL node):";
//     Node* root = createtree();

//     cout<<"Printing LevelOrderTraversal"<<endl;
//     cout<<"Level 0 "<<endl;
//     LevelOrderTraversal(root);

//     return 0;
// }
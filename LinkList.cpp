// creating linked list  
#include <iostream>     
using namespace std;                
    
class Node 
{
public:
    int data; 
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertathead(Node *&head, int data)
{
    // create new node
    Node *newnode = new Node(data);
    // attach newnode to the head
    newnode->next = head;
    // now head is new node
    head = newnode;
}
void insertatend(Node *&head, int data)
{
    // create new node
    Node *newnode = new Node(data);
    if(head==NULL){
        head->next=newnode;
        head=newnode;
    }
    else{
        Node* temp = head;

        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }

}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head =  NULL;
    Node *tail = NULL;
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *forth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);
    Node *seventh = new Node(70);

    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;

    insertathead(first, 100);
    insertatend(first, 100);

    cout << "printing LL:";
    print(first);
}

//INSERT at STAT AND END
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertathead(Node *&head,Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    // create new node
    Node *newnode = new Node(data);
    // attach newnode to the head
    newnode->next = head;
    // now head is new node
    head = newnode;
}
void insertattail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    // create node
    Node *newnode = new Node(data);
    // connect with new node
    tail->next = newnode;
    // update tail
    tail = newnode;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertathead(head, tail, 20);

    insertattail(head, tail, 110);
    insertathead(head, tail, 30);

    insertattail(head, tail, 100);

    cout << "printing LL:";
    print(head);
}

// INSERT AT ANY POSITION
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int findlength(Node *head)
{
    int i = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        i++;
    }
    return i;
}
void insertathead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    // create new node
    Node *newnode = new Node(data);
    // attach newnode to the head
    newnode->next = head;
    // now head is new node
    head = newnode;
}
void insertattail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    // create node
    Node *newnode = new Node(data);
    // connect with new node
    tail->next = newnode;
    // update tail
    tail = newnode;
}

void insertatposition(Node *&head, Node *&tail, int position, int data)
{
    if (head == NULL) {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    if (position == 0) {
        insertathead(head, tail, data);
        return;
    }
    if (position == findlength(head)) {
        insertattail(head, tail, data);
        return;
    }

    // step 1
    int i = 1;
    Node *prev = head;
    while (i < position) {
        prev = prev->next;
        i++;
    }

    // step 2
    Node *curr = prev->next;

    // step 3
    Node *newnode = new Node(data);

    // step 4
    newnode->next = curr;
    prev->next = newnode;

    if (curr == NULL) {
        // If the inserted node is the new tail
        tail = newnode;
    }
}


void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int position=3;

    insertathead(head, tail, 20);
    insertathead(head, tail, 50);
    insertathead(head, tail, 70);

    insertattail(head, tail, 110);
    insertathead(head, tail, 30);

    insertattail(head, tail, 100);

    insertatposition(head,tail,position, 10);

    cout << "printing LL:";
    print(head);
    cout << "lengh of node is :" << findlength(head);
}

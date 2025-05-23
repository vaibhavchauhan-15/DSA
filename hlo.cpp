#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};

class LRUCache : public Cache {
public:
    LRUCache(int capacity) {
        cp = capacity;
        head = nullptr;
        tail = nullptr;
    }
    void set(int key, int value) override {
        if (mp.count(key)) {
            Node* node = mp[key];
            node->value = value;
            // Move node to front
            if (node != head) {
                // Remove node from its position
                if (node->prev) node->prev->next = node->next;
                if (node->next) node->next->prev = node->prev;
                if (node == tail) tail = node->prev;
                // Insert at head
                node->next = head;
                node->prev = nullptr;
                if (head) head->prev = node;
                head = node;
            }
        } else {
            Node* node = new Node(key, value);
            mp[key] = node;
            node->next = head;
            node->prev = nullptr;
            if (head) head->prev = node;
            head = node;
            if (!tail) tail = node;
            if ((int)mp.size() > cp) {
                // Remove LRU node
                mp.erase(tail->key);
                Node* prevTail = tail;
                if (tail->prev) {
                    tail = tail->prev;
                    tail->next = nullptr;
                } else {
                    head = tail = nullptr;
                }
                delete prevTail;
            }
        }
    }
    int get(int key) override {
        if (!mp.count(key)) return -1;
        Node* node = mp[key];
        int val = node->value;
        // Move node to front
        set(key, val);
        return val;
    }
};

int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}

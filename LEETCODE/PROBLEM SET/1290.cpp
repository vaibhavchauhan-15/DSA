#include <iostream>
#include<vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int num = 0;
        while (head != nullptr) {
            num = (num << 1) | head->val; // Shift left and add current bit
            head = head->next;
        }
        return num;
    }
};

// Helper function to create linked list from vector
ListNode* createLinkedList(const vector<int>& values) {
    if (values.empty()) return nullptr;
    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;
    for (int i = 1; i < values.size(); ++i) {
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    return head;
}

int main() {
    Solution sc;
    vector<int> binary = {1, 0, 1};
    ListNode* head = createLinkedList(binary);

    int decimalValue = sc.getDecimalValue(head);
    cout << "Decimal Value: " << decimalValue << endl;

    return 0;
}

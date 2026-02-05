#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

void insertAtBeg(Node*& head, int val) {
    Node* node = new Node(val);
    node->next = head;
    head = node;
}

void printList(const Node* head) {
    while(head) {
        cout << head->data << " -> ";
        head = head->next;
    }
}

int main() {
    Node* head = nullptr;

    insertAtBeg(head, 21);
    insertAtBeg(head, 32);
    insertAtBeg(head, 10);

    printList(head);
}

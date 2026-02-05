#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

void insertAtPos(Node*& head, int pos, int val) {
    Node* node = new Node(val);
    if(pos == 1){
        node -> next = head;
        head = node;
        return; 
    }

    Node* curr = head;
    for(int i = 1; i < pos - 1; i++){
        curr = curr->next;
    }
    if(curr == NULL) return;
    node->next = curr->next;
    curr->next = node;
}

void printList(const Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
}

int main() {
    Node* head = nullptr;

    insertAtPos(head, 1, 10);
    insertAtPos(head, 2, 12);
    insertAtPos(head, 1, 32);

    printList(head);
}

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

void insertAtBeg(Node*& head, int val) {
    Node* newNode = new Node(val);

    if (head == nullptr) {
        newNode->next = newNode;
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node(val);

    if (head == nullptr) {
        newNode->next = newNode;
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head;
}

void deleteAtEnd(Node* &head){
    if(head == nullptr) return;

    if(head->next == head){
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;
    while(temp->next->next != head){
        temp = temp->next;
    }

    Node* toDel = temp->next;
    temp->next = head;
    delete toDel;
}

void deleteAtBeg(Node* &head){
    if(head == nullptr) return;

    if(head->next == head){
        delete head;
        head = nullptr;
        return;
    }

    Node* toDel = head;
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }

    temp->next = head->next;
    head = head->next;
    delete toDel;
}

void print(Node* head) {
    if (head == nullptr) {
        cout << "List empty\n";
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    cout << "(back to head)\n";
}

bool search(Node* head, int key) {
    if (head == nullptr) return false;

    Node* temp = head;
    do {
        if (temp->data == key)
            return true;
        temp = temp->next;
    } while (temp != head);

    return false;
}

int main() {
    Node* head = nullptr;

    insertAtBeg(head, 10);
    insertAtBeg(head, 5);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 30);
    insertAtEnd(head, 35);
    insertAtEnd(head, 36);

    print(head);

    deleteAtEnd(head);
    deleteAtBeg(head);

    print(head);

    int key = 20;
    cout << (search(head, key) ? "Found\n" : "Not found\n");

    return 0;
}

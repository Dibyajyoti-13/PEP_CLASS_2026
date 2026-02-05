#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

void InsertAtEnd(Node* &head, int val){
    Node* node = new Node(val);

    if(head == nullptr){
        head = node;
        return;
    }

    Node* temp = head;
    while(temp -> next != nullptr){
        temp = temp->next;
    }

    temp -> next = node;
    temp->next->prev = temp;

}

void InsertAtBeg(Node* &head, int val){
    Node* node = new Node(val);

    if(head == nullptr){
        head = node;
        return;
    }
    node->next = head;
    head->prev = node;
    head = node;
}

void InsertAtPos(Node* &head, int pos, int val){
    if(pos <= 0) return;
    Node* node = new Node(val);
    if(pos == 1){
        node->next = head;
        head->prev = node;
        head = node;
        return;
    }

    Node* temp = head;
    for(int i = 1; i < pos - 1 && temp; i++){
        temp = temp->next;
    }

    if (!temp) {
        delete node;  
        return;        
    }
    node->next = temp->next;
    node->prev = temp;

    if (temp->next)
        temp->next->prev = node;

    temp->next = node;
}

void print(Node* head){
    while(head){
        cout << head->data << " -> ";
        head = head -> next;
    }
}

int main() {
    Node* n1 = new Node(8);
    Node* n2 = new Node(3);
    n1->next = n2;
    n2->prev = n1;

    Node* head = n1;
    InsertAtEnd(head, 40);
    InsertAtBeg(head, 12);
    InsertAtPos(head, 2, 3000);
    print(head);
}
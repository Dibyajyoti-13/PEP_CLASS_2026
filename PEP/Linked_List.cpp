#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

void insertAtEnd(Node* &head, int val){
    if(head == nullptr){
        head = new Node(val);
        return;
    }
    Node* curr = head;
    while(curr->next != nullptr) curr = curr->next;
    curr->next = new Node(val);
}

void print(Node* head){
    Node* curr = head;
    while(curr != nullptr){
        cout << curr -> data << " -> ";
        curr = curr->next;
    }
}

int main(){
    Node* n1 = new Node(23);
    n1->next = new Node(32);

    Node* head = n1;

    insertAtEnd(head, 21);
    print(head);
}
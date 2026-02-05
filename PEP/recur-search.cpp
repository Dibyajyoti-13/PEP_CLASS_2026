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

bool search(Node* head, int target){
    if(head == nullptr) return false;
    if(head->data == target) return true;

    search(head->next, target);
}

int main(){
    Node* head = nullptr;

    insertAtEnd(head, 21);
    insertAtEnd(head, 10);
    insertAtEnd(head, 42);
    insertAtEnd(head, 32);
    insertAtEnd(head, 11);

    bool ans = search(head, 211);
    if(ans) cout << "Found";
    else cout << "Not Found";
}
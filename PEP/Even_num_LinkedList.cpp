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

int even(Node* head){
    if(head == nullptr) return 0;
    int count = 0;

    while(head->next != nullptr){
        if(head->data % 2 == 0) count++;
        head = head->next;
    }
    return count;
}

int main(){
    Node* head = nullptr;

    insertAtEnd(head, 33);
    insertAtEnd(head, 42);
    insertAtEnd(head, 18);
    insertAtEnd(head, 11);
    insertAtEnd(head, 17);

    cout << "Even Elements Count: " << even(head) << endl;
}
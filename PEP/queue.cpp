#include <iostream>
using namespace std;

class MyQueue{
    public:
    int* arr;
    int front;
    int rear;
    int size;

    MyQueue(int s){
        this->size = s;
        arr = new int(s);
        front = -1;
        rear = -1;
    }

    void enqueue(int val){
        if(rear == size - 1){
            cerr << "Queue overflow" << endl;
            return;
        }
        if(front == -1){
            front = 0;
        }
        arr[++rear] = val;
    }

    void dequeue(){
        if(front == -1 || front > rear){
            cerr << "Queue Underflow" << endl;
            return;
        }
        front++;
    }

    int getFront(){
        if(front == -1 || front > rear){
            cerr << "Queue is Empty" << endl;
            return -1;
        }
        return arr[front];
    }
};

int main(){

}
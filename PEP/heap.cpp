#include <iostream>
#include <vector>
using namespace std;

/*
  Heaps -> a heap is a complete binary tree that follows the heap order property

    - Complete Binary Tree (CBT) ->  all levels are completely filled except the last level, the last level is fileed from left to  right
    - Heap order property -> 
    1. Max heap -> Every parent node is greter than or wqual to its children the largest element is always at root
    2. Min heap -> every parent node is smaller than or equal to its children the smallest element is always at top

    **Important -> heap is not a BST
        
    0 based for any node:
    Left child index: 2 * i + 1
    Right child index: 2 * i + 2  
    
    1 based for any node:
    Left child index: 2 * i
    Right child index: 2 * i + 1
*/

#include<iostream>
using namespace std;

class MaxHeap{
    public:
    vector<int> heap;

    void bubbleUp(int index){

        while(index> 0){
            //find the parent
            int parent = (index - 1)/2;

            //if curr node > than parent
            if(heap[index] > heap[parent]){
                swap(heap[index], heap[parent]);
                index = parent;
            }
            else{
                break;
            }
        }

    }
    void bubbleDown(){
        
        int i  = 0;
        int size = heap.size(); 
        while(i < size){
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            int largest = i;

            if(left < size &&heap[left] > heap[largest]){
                largest = left;
            }
            if(right < size && heap[right] > heap[largest]){
                largest = right;
            }
            if(largest != i){
                swap(heap[i], heap[largest]);
                i = largest;
            }
            else{
                break;
            }
        }

    


    }

    void insert(int value){
        heap.push_back(value);
        bubbleUp(heap.size() - 1);
    }
};
 
int main(){
 
}
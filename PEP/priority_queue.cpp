/* 
priority queue is a special type of queue where elements are accessed on basisi of priority, not the insertion order
by default it has highest element priority
internally it is implemented using heap (CBT) and max heap 
*/

#include <iostream>
#include <priority_queue>
using namespace std;

int main(){
    priority_queue<int> pq_max;
    priority_queue<int, vector<int>, greater<int>> pq_min;
    
    pq_max.push(14);
    pq_max.push(23);
    pq_max.push(122);
    pq_max.push(1);
}
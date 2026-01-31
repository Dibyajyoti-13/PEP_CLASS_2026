//steps : 1 2 3 4 5 
//ways : 1 2 3 5 8
//staircase problem

#include <iostream>
using namespace std;

int ways(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(n == 2) return 2;
    return ways(n - 2) + ways(n - 1);
}

int main(){
    int steps;
    cout << "Enter steps: ";
    cin >> steps;
    cout << "Total Ways: " << ways(steps) << endl;
}
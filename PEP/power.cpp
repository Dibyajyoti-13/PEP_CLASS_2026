#include <iostream>
using namespace std;

int power(int n, int p){
    if(n == 0) return 0;
    if(n == 1 || p == 0) return 1;

    return n * power(n, p - 1);
}

int main(){
    int num , pow;
    cout << "Enter number: ";
    cin >> num;
    cout << "Enter power: ";
    cin >> pow;

    cout << "Power: " << power(num, pow) << endl;
}
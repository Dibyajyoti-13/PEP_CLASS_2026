#include<iostream>
using namespace std;

int sum(int arr[], int size){
    if(size == 1) return arr[0];
    return sum(arr, size - 1) + arr[size - 1];
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum of elements : " << sum(arr, n);
}
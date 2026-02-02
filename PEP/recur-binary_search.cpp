#include <iostream>
using namespace std;

int binary_search(int arr[], int low, int high, int target){
    if(low > high) return -1;
    int mid = (low + high) / 2;

    if(arr[mid] == target) return mid;
    else if(arr[mid] > target) return binary_search(arr, low, mid - 1, target);
    else return binary_search(arr, mid + 1, high, target);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 8, 9};
    int target = 6;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << binary_search(arr, 0, n - 1, target);
}
#include <iostream>
using namespace std;

// int search(int arr[], int key, int size){
//     if(size == 0) return -1;
//     if(arr[0] == key) return size;
//     search(arr+1, key, size - 1);
// }

// int main() {
//     int arr[] = {2, 1, 12, 3, 53, 23, 2, 43, 4, 42, 43, 3, 32, 42, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int key = 12;

//     int result = search(arr, key, n);
//     if(result == -1) cout << "Not Present";
//     else cout << "Found at " << n - result + 1 << " index";
// }

bool linearSearch(int arr[], int key, int size){
    if(size == 0) return false;

    if(arr[0] == key) return true;
    linearSearch(arr+1, key, size - 1);
}

int main() {
    int arr[] = {2, 1, 12, 3, 53, 23, 2, 43, 4, 42, 43, 3, 32, 42, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 12;

    
    if(!linearSearch(arr, key, n)) cout << "Not Present";
    else cout << "Present";
    
}


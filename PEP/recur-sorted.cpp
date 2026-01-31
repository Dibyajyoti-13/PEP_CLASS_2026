#include <iostream>
using namespace std;

bool is_sorted(int arr[], int size) {
    if (size <= 1) return true;

    if (arr[0] > arr[1]) return false;

    return is_sorted(arr + 1, size - 1);
}

int main() {
    int arr[] = {2, 1, 12, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (is_sorted(arr, n)) cout << "Sorted";
    else cout << "Not Sorted";
}

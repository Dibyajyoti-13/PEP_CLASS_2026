#include <iostream>
using namespace std;

int parition(int arr[], int start, int end){
    int pivot = arr[start];
    int count = 0;
    for(int i = start + 1; i <= end; i++){
        if(arr[i] <= pivot) count++;
    }

    int pivotIndex = start + count;
    swap(arr[start], arr[pivotIndex]);

    int i = start, j = end;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] < pivot) i++;
        while(arr[j] > pivot) j--;
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    return pivotIndex;
}

void quick_sort(int arr[], int start, int end){
    if(start >= end) return;

    int p = parition(arr, start, end);
    quick_sort(arr, start, p-1);
    quick_sort(arr, p + 1, end);
}

int main(){
    int arr[] = {12, 343, 352, 23, 234, 442, 33};
    int size = sizeof(arr) / sizeof(arr[0]);

    quick_sort(arr, 0, size - 1);

    for(int i : arr){
        cout << i << " ";
    }
}
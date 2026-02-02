#include <iostream>
using namespace std;

void merge(int arr[], int start, int end){
    int mid = (start + end) / 2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int* arr1 = new int[len1];
    int* arr2 = new int[len2];

    int k = start;
    for(int i = 0; i < len1; i++){
        arr1[i] = arr[k++];
    }

    for(int i = 0; i < len2; i++){
        arr2[i] = arr[k++];
    }

    int i = 0, j = 0;
    k = start;
    while( i < len1 && j < len2){
        if(arr1[i] > arr2[j]){
            arr[k++] = arr2[j++];
        }
        else arr[k++] = arr1[i++];
    }

    while( i < len1) arr[k++] = arr1[i++];    
    while( j < len2) arr[k++] = arr2[j++];

    delete []arr2;
    delete []arr1;
}

void merge_sort(int arr[], int start, int end){
    if(start >= end) return;
    int mid = (start + end) / 2;
    
    merge_sort(arr, start, mid);
    merge_sort(arr, mid + 1, end);

    merge(arr, start, end);
}

int main(){
    int arr[] = {12, 34, 43, 352, 23, 23, 4, 4, 42, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    merge_sort(arr, 0, size - 1);

    for(int i : arr){
        cout << i << " ";
    }
}
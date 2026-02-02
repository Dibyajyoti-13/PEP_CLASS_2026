#include <iostream>
using namespace std;

// bool search(int *arr, int row, int col, int key){
//     for(int i = 0; i < row * col; i++){
//         if(arr[i] == key) return true;
//     }
//     return false;
// }

//in cpp we need to mention the size of col in case of 2-d array
bool search(int arr[][4], int row, int col, int key){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == key) return true;
        }
    }
    return false;
}

int main(){
    int arr[3][4];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[j][i];
        }
    }

    if(search(arr, 3, 4,  2)) cout << "Present" << endl;
    else cout << "Not Present" << endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << "\t";
        }
        cout << endl;
        cout << endl;
    }
}
#include <iostream>
using namespace std;

void vertical_wave_print(int arr[][4], int row, int col){
    for(int j = 0; j < col; j++){
        if(j & 1){//odd
            for(int i = 2; i >= 0; i--){
                cout << arr[i][j] << " ";
            }
        }
        else{
            for(int i = 0; i < row; i++){
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
}

void horizontal_wave_print(int arr[][4], int row, int col){
    for(int j = 0; j < row; j++){
        if(j & 1){//odd
            for(int i = col - 1; i >= 0; i--){
                cout << arr[j][i] << " ";
            }
        }
        else{
            for(int i = 0; i < col; i++){
                cout << arr[j][i] << " ";
            }
        }
    }
    cout << endl;
}


int main(){
    int arr[3][4] = {1, 2, 3, 4,  5, 6, 7, 8,  9, 10, 11, 12};
    cout << " ======Vertical Wave Print====== " << endl;
    vertical_wave_print(arr, 3, 4);
    cout << " ======Horizontal Wave Print====== " << endl;
    horizontal_wave_print(arr, 3, 4);
}
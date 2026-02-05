#include <iostream>
using namespace std;

void sum(int arr[][4], int row, int col){
    int sum = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){    
            sum += arr[i][j];
        }
    }
    cout << "Total Sum: " << sum << endl;
}

void row_sum(int arr[][4], int row, int col){
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){    
            sum += arr[i][j];
        }
        cout << "Row Sum: " << sum << endl;
    }
}

void col_sum(int arr[][4], int row, int col){
    for(int i = 0; i < col; i++){
        int col_sum = 0;
        for(int j = 0; j < row; j++){    
            col_sum += arr[j][i];
        }
        cout << "Column Sum: " << col_sum << endl;
    }
}

void max_row_sum(int arr[][4], int row, int col){
    int index;
    int max_row_sum = 0;
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){    
            sum += arr[i][j];
        }
        if(max_row_sum < sum){
            max_row_sum = sum;
            index = i;
        }
    }
    cout << "Maximum Row Sum found at row " << index << " with sum " << max_row_sum << endl;
}

void max_col_sum(int arr[][4], int row, int col){
    int index;
    int max_col_sum = 0;
    for(int i = 0; i < col; i++){
        int sum = 0;
        for(int j = 0; j < row; j++){    
            sum += arr[j][i];
        }
        if(max_col_sum < sum){
            max_col_sum = sum;
            index = i;
        }
    }
    cout << "Maximum Column Sum found at column " << index << " with sum " << max_col_sum << endl;
}

int main(){
    int arr[3][4] = {12, 43, 2, 3, -12, 12, 9, 32, 85, 34, 65, 92};
    cout << " ======Calling Sum Function====== " << endl;
    sum(arr, 3, 4);
    cout << "\n" <<endl;
    cout << " ======Calling Row Sum Function====== " << endl;
    row_sum(arr, 3, 4);
    cout << "\n" <<endl;
    cout << " ======Calling Column Sum Function====== " << endl;
    col_sum(arr, 3, 4);
    cout << "\n" <<endl;
    cout << " ======Calling Max Row Sum Function====== " << endl;
    max_row_sum(arr, 3, 4);
    cout << "\n" <<endl;
    cout << " ======Calling Max Column Sum Function====== " << endl;
    max_col_sum(arr, 3, 4);
    cout << "\n" <<endl;
}
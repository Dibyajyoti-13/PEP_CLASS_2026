#include <iostream>
using namespace std;

void spiral_print(int arr[][4], int row, int col){
    int leftCol = 0;
    int rightCol = col - 1;
    int topRow = 0;
    int bottomRow = row - 1;

    while(leftCol <= rightCol && topRow <= bottomRow){
        //left->right
        for(int i = leftCol; i <= rightCol; i++){
            cout << arr[topRow][i] << " ";
        }
        topRow++;

        //top->down
        for(int i = topRow; i <= bottomRow; i++){
            cout << arr[i][rightCol] << " ";
        }
        rightCol--;

        //right->left
        if(topRow <= bottomRow){
            for(int i = rightCol; i >= leftCol; i--){
                cout << arr[bottomRow][i] << " ";
            }
            bottomRow--;
        }

        // down -> top
        if(leftCol <= rightCol){
            for(int i = bottomRow; i >= topRow; i--){
                cout << arr[i][leftCol] << " ";
            }
            leftCol++;
        }
    }
}

int main(){
    int arr[3][4] = {1, 2, 3, 4,  
                    5, 6, 7, 8,  
                    9, 10, 11, 12};
    spiral_print(arr, 3, 4);
}
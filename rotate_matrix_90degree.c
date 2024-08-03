/*
Question: How can you write a C program to rotate a square matrix 90 degrees clockwise and print the result?

Example:
Given a 3x3 matrix:
1 2 3
4 5 6
7 8 9

After rotating the matrix 90 degrees clockwise, the matrix should look like:
7 4 1
8 5 2
9 6 3

The output of the program will be:
7 4 1 
8 5 2 
9 6 3
*/

#include<stdio.h>

void rotateMatrix(int arr1[][3], int size){
    int i, j, temp;

    for(i=0;i<size;i++){
        for(j=i;j<size;j++){
            temp = arr1[i][j];
            arr1[i][j] = arr1[j][i];
            arr1[j][i] = temp;
        }
    }


    for(i=0;i<size;i++){
        for(j=0;j<size/2;j++){
            temp = arr1[i][j];
            arr1[i][j] = arr1[i][size-j-1];
            arr1[i][size-j-1] = temp;
        }
    }


    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

}


int main(){
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, size = 3;

    rotateMatrix(arr1, size);

    return 0;

}

/**
Question: How can you write a C program to swap the elements of two arrays of the same size and print the swapped arrays?

Example:
Given two arrays:
arr1 = {11, 22, 33, 44, 55}
arr2 = {66, 77, 88, 99, 100}

After swapping the elements:
arr1 should become {66, 77, 88, 99, 100}
arr2 should become {11, 22, 33, 44, 55}

The output of the program will be:
66 77 88 99 100 
11 22 33 44 55
**/

#include<stdio.h>

void swapArrays(int* arr1, int* arr2, int size){
    int i, j, temp;

    for(i=0;i<size;i++){
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }

    for(i=0;i<size;i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");

    for(i=0;i<size;i++){
        printf("%d ", arr2[i]);
    }
}

int main(){
    int arr1[] = {11, 22, 33, 44, 55}, arr2[] = {66, 77, 88, 99, 100}, size = 5;

    swapArrays(arr1, arr2, size);

    return 0;
}
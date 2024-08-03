// Question: How can you write a C program to input and print a 2D array of integers based on a given size?
// Example:
// Input:
// Enter the size of the array: 3
// Enter the array elements:
// 1 2 3
// 4 5 6
// 7 8 9
// Output:
// The elements are:
// 1 2 3
// 4 5 6
// 7 8 9
//
// Explanation:
// The program first prompts the user to enter the size of the square 2D array. 
// Then, it takes input for each element of the array. Finally, it prints out the 
// array elements in matrix form, maintaining the same format as entered.

#include<stdio.h>

int main(){
    int i, j, size;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int arr[size][size];

    printf("Enter the array elements : ");

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The elements are : \n");

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}
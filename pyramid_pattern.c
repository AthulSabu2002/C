// Question: How can you write a C program to print a pyramid pattern of stars based on a given number?
// Example:
// Input: num = 5
// Output:
//     *
//    ***
//   *****
//  *******
// *********
//
// Explanation:
// The program prints a pyramid pattern of stars. The number of rows is equal to the input number `num`.
// Each row contains a certain number of leading spaces followed by stars. The number of stars increases 
// by 2 for each successive row, while the number of leading spaces decreases.


#include<stdio.h>

int main(){
    int i, j, num, k;

    printf("Enter the number: ");
    scanf("%d", &num);


    for(i = 1; i <= num; i++){
        for(j = 1; j <= num - i; j++){
            printf(" ");
        }
        for(k = 1; k <= (2*i)-1; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
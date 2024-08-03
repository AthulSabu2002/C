// Question: How can you write a C program to print a hollow pyramid pattern of stars based on a given number?
// Example:
// Input: num = 5
// Output:
//         * 
//       *   * 
//     *       * 
//   *           * 
// * * * * * * * * * 
//
// Explanation:
// The program prints a hollow pyramid pattern of stars. The number of rows is equal to the input number `num`.
// The stars are printed on the border of the pyramid and at the base, with spaces filling the hollow part of the pyramid.

#include<stdio.h>

int main(){
    int i, j, num, k;

    printf("Enter the number: ");
    scanf("%d", &num);


    for(i = 1; i <= num; i++){
        for(j = 1; j <= num - i; j++){
            printf("  ");
        }
        for(k = 1; k <= (2*i)-1; k++){
            if(k==1 || k == 2*i-1 || i == num)
                printf("* ");
            else    
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
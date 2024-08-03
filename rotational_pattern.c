// Question: How can you write a C program to generate and print a pattern of numbers in a square grid format?
// Example:
// Input: n = 4
// Output:
// 1 2 3 4 
// 2 3 4 1 
// 3 4 1 2 
// 4 1 2 3 
//
// Explanation:
// The program generates a square grid pattern where each row starts with a different number 
// but follows the same sequence pattern. The numbers in the grid wrap around such that 
// after reaching `n`, it starts again from 1.

#include<stdio.h>

void generate_pattern(int n){
    int i, j, num;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            num = ((j + i)%n) + 1;
            printf("%d ", num);
        }
        printf("\n");
    }
}

int main(){
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    generate_pattern(n);

    return 0;
}
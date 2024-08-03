// Question: How can you write a C program to print a concentric square pattern of numbers?
// Example:
// Input: n = 3
// Output:
// 3 3 3 3 3 
// 3 2 2 2 3 
// 3 2 1 2 3 
// 3 2 2 2 3 
// 3 3 3 3 3 
//
// Explanation:
// The function `printPattern` generates a pattern of concentric squares with decreasing numbers 
// from the outermost layer to the center. For input `n`, the pattern is of size `2*n - 1` 
// with each layer of the pattern having the value decreasing as it gets closer to the center.

#include <stdio.h>

void printPattern(int n) {
    int size = 2 * n - 1; 


    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int min = i < j ? i : j;
            min = min < size - i - 1 ? min : size - i - 1;
            min = min < size - j - 1 ? min : size - j - 1;
            printf("%d ", n - min);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printPattern(n);

    return 0;
}

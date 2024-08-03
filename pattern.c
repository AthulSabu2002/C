// Question: How can you write a function in C to draw a pattern of numbers in a square format?
// Example:
// Input: n = 3
// Output:
// 1  2  3  
// 1  2  3  
// 1  2  3  
//
// Input: n = 4
// Output:
// 1  2  3  4  
// 1  2  3  4  
// 1  2  3  4  
// 1  2  3  4  

#include <stdio.h>

void draw_pattern(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            printf("%d  ", j);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    draw_pattern(n);
    return 0;
}

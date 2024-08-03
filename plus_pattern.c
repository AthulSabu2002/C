// Question: How can you write a function in C to draw a square pattern of '+' symbols, 
// including the borders, the main diagonals, and the central column and row?
// Example:
// Input: n = 5
// Output:
// + + + + + 
// + +   + + 
// +   +   + 
// + +   + + 
// + + + + +
//
// Explanation:
// For n = 5, the pattern has '+' symbols on the borders, the main diagonal, the anti-diagonal, 
// and in the middle row and column. The rest of the positions are filled with spaces.
//
// Input: n = 7
// Output:
// + + + + + + + 
// + +       + + 
// +   +   +   + 
// +     +     + 
// +   +   +   + 
// + +       + + 
// + + + + + + +
//
// Explanation:
// For n = 7, the pattern follows the same rules as above, with '+' symbols on the borders, 
// the main diagonal, the anti-diagonal, and in the middle row and column, while the rest are spaces.

#include<stdio.h>
#include<stdlib.h>

void draw_pattern(int n){

    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if((i==j)||(i==0)||(i==n-1)||(j==0)||(j==n-1)||(((n-1)-j)==i)){
                printf("+ ");
            }
            else
                printf("  ");
        }
        printf("\n");    
    }

}

int main(){
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    draw_pattern(n);

    return 0;
}
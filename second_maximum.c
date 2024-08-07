// Question: How can you write a C program to find the second maximum value among three given numbers?
// Example:
// Input: 5 1 3
// Output: 3
//
// Explanation:
// The function `second_max` compares the three numbers to determine which is the second highest. 
// For the input values 5, 1, and 3, the function identifies 3 as the second highest number.


#include<stdio.h>

int second_max(int a, int b, int c){
    if(a > b && b > c)
        return b;
    else if(c > b && b > a)
        return b;
    else if(b > a && a > c)
        return a;
    else if(c > a && a > b)
        return a;
    else if(a > c && c > b)
        return c;
    else if(b > c && c > a)
        return c;
}

int main(){

    int a, b, c, second;

    printf("Enter 3 numbers : ");

    scanf("%d %d %d", &a, &b, &c);
    
    second = second_max(a, b, c);

    printf("%d", second);

    return 0;
}
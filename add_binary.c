// Given two binary strings a and b, return their sum as a binary string.

 

// Example 1:

// Input: a = "11", b = "1"
// Output: "100"
// Example 2:

// Input: a = "1010", b = "1011"
// Output: "10101"

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define MIN(a, b) (a) < (b)? (a):(b)

char* addBinary(char* a, char* b) {
    int i, j, k, sum, c, d;
    char ans[1000];

    k = MIN(strlen(a), strlen(b));

    printf("%d", k-1);

    for(i = k-1;i >= 0;i--){

        printf("%d %d\n", i, c);

        c = a[i] - '0';
        d = b[i] - '0';

        
        sum = (c + d) % 2;



    }

}

int main(){

    char a[] = "1010", b[] = "1011";

    addBinary(a, b);

    return 0;
}
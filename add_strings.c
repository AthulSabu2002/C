/**
Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

 

Example 1:

Input: num1 = "11", num2 = "123"
Output: "134"
Example 2:

Input: num1 = "456", num2 = "77"
Output: "533"
Example 3:

Input: num1 = "0", num2 = "0"
Output: "0"
**/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseString(char* str, int length) {
    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

char* addStrings(char* num1, char* num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int maxLen = len1 > len2 ? len1 : len2;

    char* res = (char*)malloc(maxLen + 2);

    int i = len1 - 1;
    int j = len2 - 1;
    int k = 0;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int a = (i >= 0) ? num1[i--] - '0' : 0;
        int b = (j >= 0) ? num2[j--] - '0' : 0;
        int sum = a + b + carry;
        carry = sum / 10;
        sum = sum % 10;
        res[k++] = sum + '0';
    }

    res[k] = '\0';

    reverseString(res, k);

    return res;
}

int main() {
    char num1[] = "456";
    char num2[] = "77";

    char* result = addStrings(num1, num2);

    printf("Sum: %s\n", result);

    free(result);

    return 0;
}
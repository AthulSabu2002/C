// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

// Example 1:

// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.
// Example 2:

// Input: haystack = "leetcode", needle = "leeto"
// Output: -1
// Explanation: "leeto" did not occur in "leetcode", so we return -1.


#include<stdio.h>
#include<string.h>

int strStr(char* haystack, char* needle) {
    int h = strlen(haystack), n = strlen(needle), i = 0, j = 0, c = 0;
    int limit = h;

    if(h >= n){
        while(limit > 0){
            if(i<h && j<n && haystack[i] == needle[j]){
                c++;
                if(c == n){
                    return (i - n + 1);
                }
                j++;
            }
            else{
                i = i - c;
                c = 0;
                j = 0;
            }
            i++;
        }
    }
    else{
        return -1;
    }

    return -1;

}

int main(){

    char haystack[1000] = "mississippi", needle[1000] = "issip";

    printf("%d\n", strStr(haystack, needle)); 

    return 0;
}
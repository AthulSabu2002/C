// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

 

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.

#include <stdio.h>
#include <string.h>
#define MIN(a, b) ((a) < (b) ? (a) : (b))

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    int i, j;
    char c;
    char* first = strs[0];
    static char ans[1000];
    printf("%s\n", first);

    for (i = 0; i < strlen(first); i++) {
        c = first[i];
        for (j = 1; j < strsSize; j++) {
            if (i >= strlen(strs[j]) || strs[j][i] != c) {
                ans[i] = '\0';
                return ans;
            }
        }
        ans[i] = c;
    }
    ans[i] = '\0';
    return ans;
}

int main() {
    char* strs[] = {"flower", "flow", "flight"};
    int strsSize = 3;
    printf("Longest Common Prefix: %s\n", longestCommonPrefix(strs, strsSize));
    return 0;
}

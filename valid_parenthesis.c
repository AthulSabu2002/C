/**Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false**/


#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char * s) {

    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        
        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        } else {
            if (top == -1) {
                return false;
            }

            char topChar = stack[top--];
            if ((ch == ')' && topChar != '(') ||
                (ch == '}' && topChar != '{') ||
                (ch == ']' && topChar != '[')) {
                return false;
            }
        }
    }

    return top == -1;
}

int main() {
    char s1[] = "()";
    char s2[] = "()[]{}";
    char s3[] = "(]";

    printf("s1 is %s\n", isValid(s1) ? "valid" : "invalid");
    printf("s2 is %s\n", isValid(s2) ? "valid" : "invalid");
    printf("s3 is %s\n", isValid(s3) ? "valid" : "invalid");

    return 0;
}


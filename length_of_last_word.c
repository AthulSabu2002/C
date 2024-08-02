// Given a string s consisting of words and spaces, return the length of the last word in the string.

// A word is a maximal 
// substring
//  consisting of non-space characters only.

 

// Example 1:

// Input: s = "Hello World"
// Output: 5
// Explanation: The last word is "World" with length 5.
// Example 2:

// Input: s = "   fly me   to   the moon  "
// Output: 4
// Explanation: The last word is "moon" with length 4.
// Example 3:

// Input: s = "luffy is still joyboy"
// Output: 6
// Explanation: The last word is "joyboy" with length 6.
 

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int lengthOfLastWord(char* s) {
    int i = 0, c = 0, k = strlen(s) - 1;

    while(k >= 0){
        if(s[k] ==' ' && c == 0){
            c = 0;
        }
        else if(isalnum(s[k])){
                c++;
        }
        else
            return c;
        
        k--;
    }

    return c;
}

int main(){
    char s[1000] = "luffy is still joyboy";

    printf("%d\n", lengthOfLastWord(s));

    return 0;

}
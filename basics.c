// Question: How can you manipulate strings in C using standard library functions?
// Example:
// Input: str1 = "Bro", str2 = "Code"
// Operations and Outputs:
// str1 lowercase: "bro"
// str2 uppercase: "CODE"
// str1 + str2: "broCODE"
// str1 + first 3 characters of str2: "broCODECOD"
// str2 is copied to str1: "CODE"
// str1 + first 3 characters of str2: "CODODE"

#include<stdio.h>
#include<string.h>


int main(){
    char str1[] = "Bro";
    char str2[] = "Code";

    printf("\nstr1 : %s", str1);
    printf("\nstr2 : %s", str2);

    printf("\nstr1 lowercase : %s", strlwr(str1));
    printf("\nstr1 upper case : %s", strupr(str2));

    printf("\nstr1 + str2 : %s", strcat(str1, str2));

    printf("\nstr1 + str2, n characters of str2 : %s", strncat(str1, str2, 3));

    printf("\nstr2 is copied to str1 : %s", strcpy(str1, str2));

    printf("\nstr1 + str2, n characters of str2 : %s", strncpy(str1, str2, 3));


}
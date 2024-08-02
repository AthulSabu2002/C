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
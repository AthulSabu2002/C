#include<stdio.h>

int main(){
    int i, j, num, k;

    printf("Enter the number: ");
    scanf("%d", &num);


    for(i = 1; i <= num; i++){
        for(j = 1; j <= num - i; j++){
            printf("  ");
        }
        for(k = 1; k <= (2*i)-1; k++){
            if(k==1 || k == 2*i-1 || i == num)
                printf("* ");
            else    
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
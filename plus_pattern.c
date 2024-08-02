#include<stdio.h>
#include<stdlib.h>

void draw_pattern(int n){

    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if((i==j)||(i==0)||(i==n-1)||(j==0)||(j==n-1)||(((n-1)-j)==i)){
                printf("+ ");
            }
            else
                printf("  ");
        }
        printf("\n");    
    }

}

int main(){
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    draw_pattern(n);

    return 0;
}
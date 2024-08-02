#include<stdio.h>

void generate_pattern(int n){
    int i, j, num;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            num = ((j + i)%n) + 1;
            printf("%d ", num);
        }
        printf("\n");
    }
}

int main(){
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    generate_pattern(n);

    return 0;
}
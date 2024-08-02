#include<stdio.h>

int main(){
    int i, j, arr[4][4] = {
        {11, 22, 33, 44},
        {55, 66, 77, 88},
        {99, 100, 101, 102},
        {103, 104, 105, 106}
    };

    printf("Upper triangular part of the matrix:\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(j >= i){
                printf("%d ", arr[i][j]);
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("\nLower triangular part of the matrix:\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(i >= j){
                printf("%d ", arr[i][j]);
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}

#include<stdio.h>

int main(){
    int i, j, size;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int arr[size][size];

    printf("Enter the array elements : ");

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The elements are : \n");

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}
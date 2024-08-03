
// Question: How can you write a function in C to traverse and print the elements of an integer array?

#include<stdio.h>

void traverse(int *arr, int n){
    int i;

    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[5] = {11, 22, 33, 44, 55};

    traverse(arr, 5);

    return 0;
}
#include<stdio.h>

void reverse_array(int *nums, int n){
    int i, j, temp;

    for( i=0, j=n-1; i<j; i++, j--){
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}

int main(){
    int i, nums[7] = {11, 22, 33, 44, 55, 66, 77};

    reverse_array(nums, 7);

    for(i=0;i<7;i++){
        printf("%d ", nums[i]);
    }

    return 0;
}
#include<stdio.h>

void moveZeroes(int nums[], int n){

    int i, j = 0;

    for(i=0;i<n;i++){
        if(nums[i]!=0){
            nums[j] = nums[i];
            j++;
        }
    }

    while(j<n){
        nums[j++] = 0;
    }
}

int main(){
    int nums[5] = {0, 1, 2, 3, 4}, i;

    moveZeroes(nums, sizeof(nums)/sizeof(nums[0]));

    for(i=0;i<5;i++){
        printf("%d ", nums[i]);
    }

    return 0;

}
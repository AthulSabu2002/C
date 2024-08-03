// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

 

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:

// Input: nums = [0]
// Output: [0]

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
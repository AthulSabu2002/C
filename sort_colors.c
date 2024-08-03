// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.

 

// Example 1:

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
// Example 2:

// Input: nums = [2,0,1]
// Output: [0,1,2]

#include<stdio.h>

void sortColors(int* nums, int numsSize) {
    int i, j, temp;

    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i] > nums[j]){
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }

    for(i = 0; i < numsSize; i++)
        printf("%d ", nums[i]);
}

int main(){
    int nums[] = {2,0,2,1,1,0};

    sortColors(nums, 6);

    return 0;

}
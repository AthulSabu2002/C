// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [1,3,5,6], target = 5
// Output: 2
// Example 2:

// Input: nums = [1,3,5,6], target = 2
// Output: 1
// Example 3:

// Input: nums = [1,3,5,6], target = 7
// Output: 4

#include<stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int i = 0;
    
    if(numsSize > 0){
        while(target >= nums[i] && i < numsSize){
            if(target == nums[i]){
                return i;
            }
            i++;
        }
    }

    return i;
}

int main(){

    int nums[4] = {1,3,5,6}, target = 7;

    printf("%d", searchInsert(nums, 4, target));

    return 0;
}
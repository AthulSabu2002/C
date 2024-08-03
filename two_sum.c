// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]


#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;

    int* arr = (int*)malloc(sizeof(int) * 2);

    int i, j;
    for(i = 0; i < numsSize; i++) {
        for(j = i + 1; j < numsSize; j++) {
            if(target == nums[i] + nums[j]) {
                arr[0] = i;
                arr[1] = j;
                return arr;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    
    int* result = twoSum(nums, 4, target, &returnSize);

    if (result != NULL) {
        printf("Indices: %d %d\n", result[0], result[1]);
        free(result); 
    } else {
        printf("No solution found\n");
    }

    return 0;
}

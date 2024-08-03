// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

 

// Example 1:

// Input: nums = [3,0,1]
// Output: 2
// Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
// Example 2:

// Input: nums = [0,1]
// Output: 2
// Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.
// Example 3:

// Input: nums = [9,6,4,2,3,5,7,0,1]
// Output: 8
// Explanation: n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.

#include<stdio.h>

int missingNumber(int* nums, int numsSize) {
    int i, sum = 0, n_sum = 0, target;

    for(i = 0; i < numsSize; i++){
        sum = sum + nums[i];
    }

    for(i = 0; i <= numsSize; i++){
        n_sum = n_sum + i;
    }

    target = n_sum - sum;

    return target;
}

int main(){
    int nums[] = {9,6,4,2,3,5,7,0,1}, numsSize = 9, m;

    m = missingNumber(nums, numsSize);

    printf("%d", m);

    return 0;
}
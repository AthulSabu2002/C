/**
 * Given an integer array nums, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.

 

Example 1:

Input: nums = [3,2,1]
Output: 1
Explanation:
The first distinct maximum is 3.
The second distinct maximum is 2.
The third distinct maximum is 1.
Example 2:



Input: nums = [1,2]
Output: 2
Explanation:
The first distinct maximum is 2.
The second distinct maximum is 1.
The third distinct maximum does not exist, so the maximum (2) is returned instead.
Example 3:

Input: nums = [2,2,3,1]
Output: 1
Explanation:
The first distinct maximum is 3.
The second distinct maximum is 2 (both 2's are counted together since they have the same value).
The third distinct maximum is 1.
 */

#include<stdio.h>

int thirdMax(int* nums, int numsSize) {
    int i, j = 0, count = 1, arr[10];

    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i] < nums[j]){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    for(i=1;i<numsSize;i++){
        if(nums[i] < nums[i-1]){
            count++;
        }
        if(count == 3){
            return nums[i];
        }
    }

    return nums[0];

}

int main(){
    int nums[] = {2,2,3,1}, numsSize = 4;

    printf("%d", thirdMax(nums, numsSize));

    return 0;
}
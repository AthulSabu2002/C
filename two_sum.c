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

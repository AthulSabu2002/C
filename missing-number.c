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
#include<stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    
    int i, j = 0;

    for (i = 1; i < numsSize; i++) {
        if (nums[i] != nums[j]) {
            j++;
            nums[j] = nums[i];
        }
    }
    
    return j + 1;
}


int main(){
    int nums[] = {0,0,1,1,1,2,2,3,3,4};

    int k = removeDuplicates(nums, 10);

    printf("%d", k);

    return 0;

}
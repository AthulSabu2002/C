#include<stdio.h>

int missingNumber(int* nums, int numsSize) {
    int i, j, flag = 0;

    for(i=0;i<=numsSize;i++){
        flag = 1;
        for(j=0;j<numsSize;j++){
            if(i == nums[j]){
                flag = 0;
                break;
            }
        }
        if(flag == 1)
            return i;
    }
}

int main(){
    int nums[] = {9,6,4,2,3,5,7,0,1}, numsSize = 9, m;

    m = missingNumber(nums, numsSize);

    printf("%d", m);

    return 0;
}
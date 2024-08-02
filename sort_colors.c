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
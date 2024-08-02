#include<Stdio.h>

int trap(int* height, int heightSize) {
    int i, j = 0, lm[heightSize], rm[heightSize], min[heightSize], prev = 0, res = 0;
    for(i=0;i<heightSize;i++){
        if(height[i] >= prev){
            lm[i] = height[i];
            prev = lm[i];
        }
        else{
            lm[i] = prev;
            prev = lm[i];
        }
    }

    prev = 0;

    for(i=heightSize-1;i>=0;i--){
        if(height[i] >= prev){
            rm[i] = height[i];
            prev = rm[i];
        }
        else{
            rm[i] = prev;
            prev = rm[i];
        }
    }

    for(i=0;i<heightSize;i++){
        if(lm[i] <= rm[i]){
            res = res + (lm[i] - height[i]);
        }
        else{
            res = res + (rm[i] - height[i]);
        }
    }

    return res;

}


int main(){
    int height[] = {0,1,0,2,1,0,1,3,2,1,2,1}, litres;

    litres = trap(height, 12);

    printf("l : %d", litres);

    return 0;
}
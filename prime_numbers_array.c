#include<stdio.h>
#include<math.h>

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, n=10, i;
    int flag = 0;

    for(i=0;i<n;i++){
        flag = 0;
        for (int j = 2; j <= sqrt(arr[i]); j++) {
            if ((arr[i] > 1) && (arr[i] % j == 0)) {
                flag = 1;
            }
        }
        if((arr[i] > 1) && (flag == 0))
            printf("%d ", arr[i]);
    }

    return 0;

}
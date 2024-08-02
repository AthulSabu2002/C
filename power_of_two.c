#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPowerOfTwo(int n){
    if((n > 0) &&(n & (n-1)) == 0) return true;
    else
        return false;
}

int main(){
    bool flag = isPowerOfTwo(10);
    printf("%s\n", flag ? "true" : "false" );
    return 0;
}
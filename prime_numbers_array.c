// Question: How can you write a C program to find and print all prime numbers in a given array?
// Example:
// Input array: {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
// Output: 2 3 5 7
//
// Explanation:
// The program iterates through each element of the array, checks if it is a prime number, 
// and prints it if it is. The prime number check is done by testing divisibility from 2 
// up to the square root of the number.

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
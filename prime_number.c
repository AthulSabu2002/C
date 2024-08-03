// Question: How can you write a function in C to check if a given number is a prime number?
// Example:
// Input: num = 7
// Output: Yes, it's a prime number.
//
// Input: num = 10
// Output: Not prime.
//
// Explanation:
// The function `isPrime` checks if a number is prime by dividing it by all integers from 2 up to the square root of the number. 
// If any of these divisions result in a remainder of 0, the number is not prime. Otherwise, it is prime.


#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    bool res;

    printf("Enter the number: ");
    scanf("%d", &num);

    res = isPrime(num);
    
    if (res)
        printf("Yes, it's a prime number.\n");
    else
        printf("Not prime.\n");

    return 0;
}

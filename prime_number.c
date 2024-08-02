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

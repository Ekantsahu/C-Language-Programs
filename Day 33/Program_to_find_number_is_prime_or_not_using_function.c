#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0; 
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int num, result;

   
    printf("Input a positive number: ");
    scanf("%d", &num);

    result = isPrime(num);

    if (result == 1) {
        printf("The number %d is a prime number.\n", num);
    } else {
        printf("The number %d is not a prime number.\n", num);
    }

    return 0;
}


/*
3,5,7,11
*/
#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the range: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are: ", n);
    for (i = 2; i <= n; i++) {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
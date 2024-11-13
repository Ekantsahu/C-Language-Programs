#include <stdio.h>

int square(int n) {
    return n * n;
}

int main() {
    int num, result;

    printf("Input any number for square: ");
    scanf("%d", &num);

    result = square(num);

    printf("The square of %d is: %d\n", num, result);

    return 0;
}

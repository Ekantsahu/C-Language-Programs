#include <stdio.h>

int main() {
    int num, l = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int square = num * num;
    int temp = num;

    while (temp != 0) {
        l++;
        temp /= 10;
    }

    int p = 1;
    for (int i = 0; i < l; i++) {
        p *= 10;
    }

    if (square % p == num) {
        printf("%d is an Automorphic Number\n", num);
    } else {
        printf("%d is Not an Automorphic Number\n", num);
    }

    return 0;
}

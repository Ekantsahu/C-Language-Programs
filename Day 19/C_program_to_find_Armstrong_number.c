#include <stdio.h>
#include <math.h>

int main() {
    int n, r, count, i, j;
    double sum;

    printf("Enter a number greater than 100: ");
    scanf("%d", &n);

    if (n < 100) {
        printf("Please enter a value greater than 100\n");
        return 1;
    }

    printf("Armstrong numbers between 100 and %d are: ", n);

    for (i = 100; i <= n; i++) {
        sum = 0;
        j = i;
        count = 0;

        for (int temp = i; temp != 0; temp /= 10) {
            count++;
        }

        for (j = i; j != 0; j /= 10) {
            r = j % 10;
            sum += pow(r, count);
        }

        if (i == sum) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    int a[100], i, n;

    printf("Enter the number in range 1-100: ");
    scanf("%d", &n);

    if (n > 1) {
        printf("Yes, the length is greater than 1\n");
    }

    if (n < 1 || n > 100) {
        printf("Enter a number in the range 1-100\n");
    } else {
        printf("Enter %d integers: ", n);
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

     
        if (a[0] == a[n - 1]) {
            printf("Both first and last elements are equal\n");
        } else {
            printf("Not equal\n");
        }

        for(i=0;i<n;i++){
            printf("Element at a[%d] is %d\n",i,a[i]);
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    int a[100], n = 10, i;

    printf("Enter %d integer elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element at index %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nElements at even indices are:\n");
    for(i = 0; i < n; i += 2) {  
        printf("Element at index %d: %d\n", i, a[i]);
    }

    printf("\nElements at odd indices are:\n");
    for(i = 1; i < n; i += 2) { 
        printf("Element at index %d: %d\n", i, a[i]);
    }

    return 0;
}

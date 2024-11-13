#include <stdio.h>

int arraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;

    printf("Size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = arraySum(arr, size);

    printf("Sum of all elements in the array: %d\n", sum);

    return 0;
}

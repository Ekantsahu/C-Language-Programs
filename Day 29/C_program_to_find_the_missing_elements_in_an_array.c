#include <stdio.h>

int main() {
    int n;
    

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    int min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }


    printf("The missing elements are: ");
    for (int i = min + 1; i < max; i++) {
        int found = 0;
        
       // 1 5 7 10 13 
        for (int j = 0; j < n; j++) {
            if (arr[j] == i) {
                found = 1;
                break;
            }
        }
        
        
        if (!found) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

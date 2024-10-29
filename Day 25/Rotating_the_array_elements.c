#include <stdio.h>

int main() {
    int arr[100],n,i;

    printf("Enter in range 1-100");
    scanf("%d",&n);
    
   
    printf("Enter %d elements: ",n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    int temp = arr[0];
    for ( i = 0; i < 2; i++) {
        arr[i] = arr[i + 1];
    }
    arr[2] = temp;

  
    printf("Rotated array: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

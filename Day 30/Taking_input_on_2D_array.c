#include <stdio.h>

int main(){
    int a[100][100], i, n, j;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Input elements in the matrix:\n");

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("The matrix is:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%2d ", a[i][j]);
        }
        printf("\n");  
    }

    return 0;
}

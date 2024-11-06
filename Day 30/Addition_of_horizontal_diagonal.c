#include <stdio.h>

int main() {
    int rows, cols, s = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

   
    if (rows != cols) {
        printf("Matrix must be square for diagonal sum calculation.\n");
        return 1;
    }

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Original Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

   
    for (int i = 0; i < rows; i++) {
        s += matrix[i][rows - i - 1];
    }

    printf("Sum of the horizontal diagonal elements is: %d\n", s);

    return 0;
}

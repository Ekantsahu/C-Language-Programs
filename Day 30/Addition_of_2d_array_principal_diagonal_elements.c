#include <stdio.h>

int main() {
    int rows, cols,s=0;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    

    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Orignal Matrix: \n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    
     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
           if(i==j){
            s= s+matrix[i][j];
           }
        }
      
    }
     printf("Addition of the principal Diagonal elements is : %d",s);

  

    return 0;
}

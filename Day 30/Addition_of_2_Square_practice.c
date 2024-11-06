#include <stdio.h>

int main(){
    int a[100][100],n,i,j;
    int b[100][100];
    int c[100][100];

    printf("Input the size of the square matrix : ");
    scanf("%d",&n);

     printf("Input elements in the first matrix:\n");

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

     printf("Input elements in the Second matrix:\n");

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[i][j]= a[i][j]+ b[i][j];
        }
    }



     printf("The first matrix is:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%2d ", a[i][j]);
        }
        printf("\n");  
    }

     printf("The second matrix is:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%2d ", b[i][j]);
        }
        printf("\n");  
    }

    printf("The Addition of 2 matrices is : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%3d",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
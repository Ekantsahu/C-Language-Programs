#include <stdio.h>

int main() {
    int a[100],b[100], i, n;

    printf("Enter the number in range 1-100: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Enter a number in the range 1-100\n");
    } else {
        printf("Enter %d integers for a: ", n);
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        printf("Enter %d integers for b: ", n);
        for (i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }

     
        if (a[0] == b[0]) {
            printf("Both first elements of array a and b are equal \n");
        } else {
            printf("Not equal\n");
        }

        if(a[n-1]==b[n-1]){
            printf("Both last elements of an array is equal\n");
        }else{
            printf("Not equal\n");
        }

        for(i=0;i<n;i++){
            printf("Element at a[%d] is %d\n",i,a[i]);
        }
        printf("\n");
         for(i=0;i<n;i++){
            printf("Element at b[%d] is %d\n",i,b[i]);
        }
    }

    return 0;
}

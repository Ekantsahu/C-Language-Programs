#include <stdio.h>

int main(){
     int a[100],n,i;

    printf("Enter the number of index: ");
    scanf("%d",&n);

    printf("Enter %d integer : ",n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("Array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    printf("\n");

    int min = a[0];
    int max = a[0];

    for(int i = 1; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
        if(a[i] > max) {
            max = a[i];
        }
    }

    printf("Minimum element is %d\n", min);
    printf("Maximum element is %d\n", max);
    
    return 0;
}
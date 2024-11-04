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

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(a[j] > a[j+1]){
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i = n-1; i >= 0; i--){
        if(a[i] < a[n-1]){
            printf("Second largest : %d", a[i]);
            break;
        }
    }
    return 0;
}
#include <stdio.h>

int main(){
    int a[100],i,n;

    printf("Enter the size of the array : ");
    scanf("%d",&n);

    printf("Enter %d elements : \n",n);
    for(i=0;i<n;i++){
        printf("Element at index %d: ",i);
        scanf("%d",&a[i]);
    }

    printf("The elements in the array are: ");

    for(i=0;i<n;i++){
        printf("\nElement at index %d: %d",i,a[i]);
    }

    return 0;
}
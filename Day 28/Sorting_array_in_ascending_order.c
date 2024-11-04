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
     for(i=0;i<n;i++){
     printf("%d ",a[i]);
    }
    printf("\n");

   for(i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
        if(a[j]>a[j+1]){
            int temp = a[j+1];
            a[j+1] = a[j];
            a[j] = temp;
        }
    }
 }
  printf("Sorted array: ");
  for(i = 0;i<n;i++){
    printf("%d ",a[i]);
  }

    
    
    return 0;
}
#include <stdio.h>

int main(){
    int a[100],n,i,search;

    printf("Enter the number of index: ");
    scanf("%d",&n);

    printf("Enter %d integer: ",n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }

    printf("Element to search: ");
    scanf("%d",&search);
    

    for(i=0;i<n;i++){
        if(a[i]==search){
            printf("Element %d found at index %d ",search,i);
            break;
        }
    }
    if(i==n){
        printf("Element %d not found in the array",search);
    }
   
    return 0;
}
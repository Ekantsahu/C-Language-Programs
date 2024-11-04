#include <stdio.h>

int main(){
     int a[100],n,i,element,found;

    printf("Enter the number of index: ");
    scanf("%d",&n);

    printf("Enter %d integer : ",n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }

    printf("Enter the element to be deleted: ");
    scanf("%d",&element);

    for(int i=0;i<n;i++){
        if(a[i] == element){
            found = 1;
            for(int j=i;j<n;j++){
                a[j] = a[j+1];
            }
            n--;
            i--;
        }
    }

    if(found){
        printf("New Array: ");
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
    }else{
        printf("Element not found in the array.\n");
    }


    return 0;
}
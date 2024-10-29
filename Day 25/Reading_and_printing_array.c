#include <stdio.h>

int main(){
    int a[100],i,n;

    printf("Enter range between 1-100:");
    scanf("%d",&n);

    if(n<1||n>100){
        printf("Please enter the range between 1-100");
    }else{
        printf("Enter %d integer : ",n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }

        for(i=0;i<n;i++){
            printf("Element at a[%d] is %d\n",i,a[i]);
        }
    }
    return 0;
}
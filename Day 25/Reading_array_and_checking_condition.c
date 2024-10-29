#include <stdio.h>

int main(){
    int a[100],i,n;
    
    printf("Enter range between 1-100: ");
    scanf("%d",&n);

    if(n<1||n>100){
        printf("Enter in range 1-100");
    }
    else{
        printf("Enter %d integers: ",n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }

        if(a[0]==15||a[n-1]==15){
            printf("yes");
        }else{
            printf("Not present");
        }
        for(i=0;i<n;i++){
            printf("\na[%d] = %d",i,a[i]);
        }
    }
    return 0;
}
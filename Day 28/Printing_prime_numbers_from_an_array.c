#include <stdio.h>

int main(){
    int a[100],n,i;

    printf("Enter the number of index: ");
    scanf("%d",&n);

    printf("Enter %d integer: ",n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }

    printf("Prime numbers in the array : ");
    for(i=0;i<n;i++){
        int num = a[i];
        int isPrime = 1 ;

        if(num<=1){
            isPrime=0;
        }else{
            for(int j=2;j*j<=num;j++){
                if(num%j==0){
                    isPrime=0;
                    break;
                }
            }
        }

        if (isPrime)
        {
            printf("%d ",num);
        }
        
    }
    printf("\n");


    return 0;
}
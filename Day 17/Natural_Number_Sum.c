#include <stdio.h>

int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    int orgNum = n;

    printf("The first %d natural number is :\n",orgNum);
    for(i=1;i<=n;i++){
        printf("%d ",i);
        sum = sum+i;
    }
    printf("\nThe Sum of Natural Numbers upto %d terms : %d",orgNum,sum);
}
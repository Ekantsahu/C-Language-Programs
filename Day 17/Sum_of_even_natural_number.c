#include <stdio.h>

int main(){
    int n,i,sum = 0;
    scanf("%d",&n);
    int orgNum=n;
    for(i=1;i<=n*2;i++){
        
        if(i%2==0){
            sum  = sum + i;
            printf("%d ",i);
        }
    }
    printf("\nThe Sum of even Natural Numbers up to %d terms: %d",orgNum,sum);
    return 0;
}
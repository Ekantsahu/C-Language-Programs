#include <stdio.h>

int main(){
    int n,i,sum = 0;
    scanf("%d",&n);
    int m=n;

    if(n<0){
        printf("It is a negative number.. ");
    }
    for(i=1;i<n;i++){
        if(n%i==0){
            sum = sum+i;
        }
    }
    if(sum==m){
        printf("%d is a perfect number..",m);
    }else{
        printf("%d It is not a perfect number..",m);
    }
    printf("%d",sum);
return 0;
}
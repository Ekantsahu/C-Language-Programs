#include <stdio.h>

int main(){
    int n,i=1;
    int mul;
    scanf("%d",&n);

    while(i<=10){
        printf("%dx%d=%d\n",n,i,mul=n*i);
        i++;
    }
    return 0;
}
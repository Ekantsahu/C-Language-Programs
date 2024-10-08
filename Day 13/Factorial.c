#include <stdio.h>

int main(){
    int n,fact = 1;
    scanf("%d",&n);

    while(n>1){
        fact = fact*n;
        n--;
    }
    printf("%d",fact);
}
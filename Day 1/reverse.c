#include <stdio.h>

void main(){
    int n;
    int rem;
    printf("Enter a number = ");
    scanf("%d ",&n );

    while (n!=0)
    {
       rem = n%10;
       printf("%d",rem);
       n=n/10;
    }
    
}
#include <stdio.h>

int main(){
    int n,isPrime = 1,i;
    printf("Enter the number  : ");
    scanf("%d",&n);

    if (n<=1)
    {
       printf("It is not a prime number:::");
       
    }

    for ( i = 2; i <= n/2; i++)
    {
        if (n%i==0)
        {
            isPrime = 0;
            break;
        }
        
    }

    if (isPrime)
    {
        printf("It is a prime number...");
    }
    else{
        printf(" It is not a prime number...");
    }

    return 0;
}
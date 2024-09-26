#include <stdio.h>

int main(){
    int n;
    int m;

    printf("Enter any number : ");
    scanf("%d",&n);
    printf("Enter any number : ");
    scanf("%d",&m);

    n%2==0 && printf("%d is an Even number\n",n)||printf("%d is an Odd number\n",n);
    m%2==0 && printf("%d is an Even number\n",m)||printf("%d is an Odd number\n",m);

        return 0;
}
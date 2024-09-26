#include <stdio.h>

void main(){
    int n =84;
    int rem;
    rem = n%10;
    n= n/10;
    rem>=5 && printf("%d",(n+1)*10) || rem<5 && printf("%d",n*10);
}
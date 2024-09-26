#include <stdio.h>

void main(){
    int a = 54;
    int sumofdigits = 0;
    sumofdigits = sumofdigits + a%10;
    sumofdigits = sumofdigits + a/10;
    printf("sumofdigits of a is %d ",sumofdigits);
    return;
}
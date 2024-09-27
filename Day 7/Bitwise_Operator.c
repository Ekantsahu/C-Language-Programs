#include<stdio.h>

int main(){
    int a ;
    int b ;
    printf("Enter the value a = ");
    scanf("%d",&a);
    printf("Enter the value b = ");
    scanf("%d",&b);

    printf(" a & b = %d\n",a & b);
    printf(" a | b = %d\n", a | b);
    printf(" a ^ b = %d\n", a ^ b);
    printf("~a = %lu\n", ~a);
    printf(" a << 1 = %d\n", a << 1);
    printf(" a >> 1 = %d\n", a >> 1);

    return 0;
}
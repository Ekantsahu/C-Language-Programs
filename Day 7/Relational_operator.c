#include<stdio.h>

int main(){
    int x ;
    int y ;
    printf("Enter the value x = ");
    scanf("%d",&x);
    printf("Enter the value y = ");
    scanf("%d",&y);

    printf(" x==y = %d\n",x==y);
    printf(" x! = y %d\n", x != y);
    printf(" x>y = %d\n", x>y);
    printf(" x<y = %lu\n", x<y);
    printf(" x >= y = %d\n", x>=y);
    printf(" x<=y = %d\n", x<=y);

    return 0;
}
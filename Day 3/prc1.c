#include <stdio.h>

void main(){
    int a;
    int sumOfvariable;
    int lastdigit;
    int firstdigit;
    printf("Enter any 3 digit number");
    scanf("%d",&a);

    lastdigit = a%10;
    a = a/10;
    firstdigit = a/10;
    sumOfvariable = firstdigit+lastdigit;
    printf("%d",sumOfvariable);
    

    
}
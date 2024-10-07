/*
Write a C program to do a arithmetic operation on two numbers by using Switch Case. 
Take the operators(+,-,*,/,%) as cases and take the input from the user that what kind of operation user want to do on two number.


Sample input :

Enter num1 :10
Enter num2 :20
Enter operation : '*'


Sample output :

Multiplication is :200
*/


#include <stdio.h>

int main(){
    int num1,num2;
    char ch ;

   printf("Enter number num1: ");
    scanf("%d", &num1);

    printf("Enter number num2: ");
    scanf("%d", &num2);

    printf("Enter operation (+, -, *, /, %%): ");
    scanf(" %c", &ch);
    switch(ch){
        
        case '+':
        printf("Addition = %d",num1+num2);
        break;

        case '-':
        printf("Subtraction = %d",num1-num2);
        break;

        case '*':
        printf("Multiplication = %d",num1*num2);
        break;

        case '/':
        printf("Division = %d",num1/num2);
        break;

        case '%':
        printf("Modulo = %d",num1%num2);
        break;

        default:
        printf("Enter the valid operator : ");
       
    }
    return 0;
}

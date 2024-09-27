#include <stdio.h>

int main()
{
    int Number1;
    int Number2;
    char characters;
    printf("Enter Number  = ");
    scanf("%d", &Number1);

    printf("Enter Number  = ");
    scanf("%d", &Number2);

    printf("Enter any operator to perform operations = ");
    scanf(" %c", &characters);

    switch (characters)
    {
    case '+':
        printf("Addition = %d",Number1+Number2);
        break;
    case '-':
        printf("Subtraction = %d",Number1-Number2);
        break;
    case '*':
        printf("Multiplication = %d",Number1*Number2);
        break;
   case '/':
        printf("Division = %d",Number1/Number2);
        break;
    default: 
        printf("Enter a Valid Operator");
        break;
    }
        return 0;
    }
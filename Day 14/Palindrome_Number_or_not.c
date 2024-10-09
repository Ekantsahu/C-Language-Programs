#include <stdio.h>

int main()
{
    int n, rem = 0, rev = 0;
    scanf("%d", &n);
    int t = n;
    while (n > 0)
    {
        rem = n % 10;//121
        rev = (rev * 10) + rem;
        
        n = n / 10;
    }
    printf("reverse=%d\n", rev);
    if (t == rev)
    {
        printf("%d is a palindrome number .", t);
    }
    else
    {
        printf("%d Not a palindrome number .", t);
    }

    return 0;
}
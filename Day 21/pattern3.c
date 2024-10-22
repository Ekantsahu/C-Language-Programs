/*
#  0  0  0  #
0  #  0  #  0
0  0  #  0  0
0  #  0  #  0
#  0  0  0  #
*/

#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j || i + j == n + 1)
                printf("%2c", '#');
            else
                printf("%2d", 0);
        }
        printf("\n");
    }
    return 0;
}
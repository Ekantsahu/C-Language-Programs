#include <stdio.h>
int main()
{
    int x = 3;
    int y = 2;
    int z = x++ * (x + y) - - -y;
    printf("z = %d\n", z);
    return 0;
}
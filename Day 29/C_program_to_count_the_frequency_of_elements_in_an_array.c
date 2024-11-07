#include <stdio.h>
int main()
{
    int n, i, j, c;

    printf("Enter aray size: ");
    scanf("%d", &n);

    int a[n], b[n];
    printf("Enter %d integer: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        if (b[i] != -1)
        {
            for (c = 1, j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    c++;
                    b[j] = -1;
                }
            }
            b[i] = c;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (b[i] != -1)
        {
            printf("%d found %d time\n", a[i], b[i]);
        }
    }
}
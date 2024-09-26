#include <stdio.h>

int main()
{
    int hours, minutes, seconds, totalseconds;
    printf("Enter the number of seconds: ");
    scanf("%d", &totalseconds);

    hours = totalseconds / 3600;
    totalseconds = totalseconds % 3600;
    minutes = totalseconds / 60;
    seconds = totalseconds % 60;

    printf(" %d hours , %d minutes  , %d seconds ", hours, minutes, seconds);
    return 0;
}
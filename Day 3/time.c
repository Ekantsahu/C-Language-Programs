#include <stdio.h>

int main() {
    int  hours, minutes, seconds;

    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = seconds / 60;
    seconds = seconds % 60;

    printf("= %d Hours , %d Minutes , %d Seconds \n", hours, minutes, seconds);

    return 0;
}

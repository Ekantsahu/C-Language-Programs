#include <stdio.h>

void main(){
    int sec;
    int hour;
    int minute;

    printf("Enter the seconds: ");
    scanf("seconds = %d",sec);

    hour = sec/3600;
    minute = (sec - 3600) / 60;

    sec = (sec - 3600 - 60);

    printf("%d hours\n %d minutes\n %d seconds", hour, minute,sec);
}





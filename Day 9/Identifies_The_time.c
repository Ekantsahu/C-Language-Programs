#include <stdio.h>

int main(){
    int hour ;
    printf("Enter the hour ");
    scanf("%d",&hour);

    if(hour>0&&hour<=6){
        printf("It's Night");
    }else if(hour>6&&hour<=12){
        printf("It's Morning");
    }else if(hour>12&&hour<=18){
        printf("It's Afternoon");
    }else if(hour>18&&hour<=24){
        printf("It's Evening");
    }else{
        printf("Not a valid hour format");
    }
}
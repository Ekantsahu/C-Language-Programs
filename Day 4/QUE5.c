#include <stdio.h>

int  main(){
    int days ;
    int months;
    int weeks;
    int years;
    int totaldays;

    printf("Enter total number of days : ");
    scanf("%d",&totaldays);

    years = totaldays / 365;
    months = (totaldays - 365)/30;
    weeks = (totaldays-365)/7;
    days = (totaldays-365)-weeks*7;
    printf("Years = %d,Month = %d,Weeks = %d,days = %d",years,months,weeks,days);



}
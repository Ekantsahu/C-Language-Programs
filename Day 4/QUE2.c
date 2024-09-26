#include <stdio.h>
 
 int  main(){
     float cm = 0;
     float inch= 0 ;

     printf("Enter the number : ");
     scanf("%f",&cm);

     inch = (cm*0.3937);
     printf("The answer in meter is = %.4f",inch);
     
     }
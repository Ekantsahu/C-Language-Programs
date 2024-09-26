#include <stdio.h>

int main(){
    float p =0;
    float r = 0;
    float t = 0;
    float simple_interest = 0;

    printf("Enter the principle amount rate and time : ");
    scanf("%f %f %f",&p,&r,&t);

    simple_interest = (p*r*t)/100;
    printf("Simple interest is: %.2f",simple_interest);

    return 0;
}
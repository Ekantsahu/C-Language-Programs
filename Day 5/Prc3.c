#include <stdio.h>

int main(){
    float totalBill = 0;
    int numOfPpl = 0;

    printf("Enter the total bill: ");
    scanf("%f",&totalBill);

    printf("Enter number of people: ");
    scanf("%d",&numOfPpl);

    printf("Amount each member needs to pay -> %.0f",totalBill/numOfPpl);
    return 0;
}
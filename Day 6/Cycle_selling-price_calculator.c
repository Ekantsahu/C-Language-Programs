#include <stdio.h>

int main(){
    int costPrice = 0;
    int repaircost = 0;
    int coloringcost = 0;
    int accesoriescost = 0;
    int desireprofit = 0;
    int totalcost = 0;

    printf("Enter the cost price =  ");
    scanf("%d",&costPrice);
    printf("Enter the repair cost =  ");
    scanf("%d",&repaircost);
    printf("Enter the coloring cost  =  ");
    scanf("%d",&coloringcost);
    printf("Enter the accesories cost =  ");
    scanf("%d",&accesoriescost);
    printf("Enter the desire profit =  ");
    scanf("%d",&desireprofit);

    totalcost = costPrice+repaircost+coloringcost+accesoriescost+desireprofit;
    printf("The Selling price is = %d\n",totalcost);
    printf("Costprice = %d , Repaircost = %d , Coloringcost = %d , Accesories cost = %d , Desire Profit = %d \n",costPrice,repaircost,coloringcost,accesoriescost,desireprofit);


    return 0;
}
#include <stdio.h>

int main(){
    int profit = 0;
    int loss = 0;
    int profitpercentage,losspercentage;
    int costprice ;
    printf("Enter the cost price : ");
    scanf("%d",&costprice);
    int sellingprice;
    printf("Enter the selling price : ");
    scanf("%d",&sellingprice);

    profit = sellingprice-costprice;
    loss = costprice-sellingprice;

    profitpercentage =  (profit*100)/costprice;
    losspercentage = (loss*100)/costprice;

    printf("Cost Price : %d\n",costprice);
    printf("Selling Price %d\n",sellingprice);

    printf("Profit = %d, Loss = %d,\n",profit,loss);
    printf("Profit percentage is = %d\n",profitpercentage);
    printf("Loss percentage is = %d\n",losspercentage);


    return 0;
}
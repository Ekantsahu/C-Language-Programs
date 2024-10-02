#include <stdio.h>

int main(){
    int CP,SP;
    int qty = 100;
    int profit_per_unit;
    int profit,loss;
    printf("Enter the cost price and selling price :");
    scanf("%d %d",&CP,&SP);

    if(CP<SP){
        profit_per_unit=SP-CP;
        printf("Total Profit on 100 units = %d",qty*profit_per_unit);
    }else if(CP>SP){
        profit_per_unit = CP-SP;
        printf("Total Loss on 100 units = %d",qty*profit_per_unit);
    }

}
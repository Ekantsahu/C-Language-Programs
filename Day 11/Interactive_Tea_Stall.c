#include <stdio.h>

int main(){
    int tea=10,coffee=20,cold_coffe=50,qty,total,amount_paid,change;
    char order_no,order_again;
    printf("Welcome to our Tea Stall Counter! Our menu:\n");
    printf("Tea --------------------- Rs. 10\n");
    printf("Coffee ------------------ Rs. 20\n");
    printf("Cold coffee ------------- Rs. 50\n");
    printf("Exit\n");
    printf("Choose by entering a number (1-4): ");
    scanf("%c",&order_no);

    
    if (order_no == '1')
    {
        printf("How many cups of refreshing tea? = "); 
        scanf("%d",&qty); 
        total = tea*qty;
    }else if (order_no == '2')
    {
       printf("How many cups of aromatic coffee? = ");
        scanf("%d",&qty);
        total = coffee*qty;
    }else if(order_no == '3')
    {
        printf("How many cups of chilled cold coffee? = ");
        scanf("%d",&qty);
        total = cold_coffe*qty;
    } else if (order_no == '4') 
    {
            printf("Thank you for visiting! We look forward to serving you again soon!\n");
            return 0;  // Exit the program
    } 
      else
        {
            printf("Invalid choice, please select a valid option.\n");
            
        }


        printf("Total for %d cup(s): Rs. %d\n", qty, total);
        printf("Enter your payment amount: Rs. ");
        scanf("%d", &amount_paid);

        if (amount_paid >= total)
        {
            change = amount_paid-total;
            printf("Change: Rs. %d\n",change);
        }else{
            printf("Insufficient amount paid you need to pay atleast Rs. %d",total);
        }

        printf("Explore more or finalize? (Type 'Y' for Yes or 'N' for No): ");
        scanf(" %c", &order_again);

        if (order_again == 'Y'|| order_again == 'y')
        {
          printf("Certainly, let's explore.");
        }
        else{

            printf("Thank you for visiting! We look forward to serving you again soon!\n");
        }
  
    return 0;
}
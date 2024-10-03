#include <stdio.h>

int main() {
    int age;
    float height, base_price, final_price;
    char vip_pass;

    printf("Enter the customer age: ");
    scanf("%d", &age);
    printf("Enter the customer height in cm: ");
    scanf("%f", &height);
    printf("Does the customer have a VIP pass? (y/n): ");
    scanf(" %c", &vip_pass); 

    if (age < 0 || height < 0) {
        printf("Error: Age or height cannot be negative.\n");
        return 1;
    }
    if (age <= 3) {
        base_price = 0;
    } else if (age >= 4 && age <= 12) {
        base_price = 20;
    } else if (age >= 13 && age <= 64) {
        base_price = 100;
    } else if (age >= 65) {
        base_price = 50;
    }

    final_price = base_price;

    if (height > 180) {
        final_price += 50; 
        printf("Additional charge applied for height above 180 cm.\n");
    } else if (height < 120) {
        final_price *= 0.5; //
        printf("50%% discount applied for height below 120 cm.\n");
    }
    
    if (vip_pass == 'y' || vip_pass == 'Y') {
        final_price *= 0.9; // 
        printf("10%% discount applied for VIP pass.\n");
    }

    printf("\nCustomer's age: %d years\n", age);
    printf("Customer's height: %.2f cm\n", height);
    printf("VIP pass status: %s\n", (vip_pass == 'y' || vip_pass == 'Y') ? "Yes" : "No");
    printf("Base ticket price: Rs.%.2f\n", base_price);
    printf("Final ticket price after adjustments: Rs.%.2f\n", final_price);

    return 0;
}

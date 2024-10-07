/*
Problem Statement:
Write a C program that takes a month number (1-12) as input and prints the number of days using a switch statement. If the input is not between 1-12, display an error message.

Requirements:

Use a switch-case structure to handle different month numbers:
For 31-day months (Jan, Mar, May, Jul, Aug, Oct, Dec), print "31 days."
For 30-day months (Apr, Jun, Sep, Nov), print "30 days."
For Feb (month 2), print "28 or 29 days (depending on leap year)."
For invalid month numbers, print "Invalid month number!"
Sample Input/Output:

Input: 3 → Output: 31 days
Input: 2 → Output: 28 or 29 days (depending on leap year)
Input: 11 → Output: 30 days
*/

#include <stdio.h>

int main(){
    int month;
    printf("Enter any month between 1-12: \n");
    scanf("%d", &month);

    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 days");
            break;
        case 4: case 6: case 9: case 11:
            printf("30 days");
            break;
        case 2:
            printf("28 or 29 days (depends on leap year)");
            break;
        default:
            printf("Invalid month number");
    }

    return 0;
}

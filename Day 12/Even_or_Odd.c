/*
Write a C program to check the number is even or odd by using Switch Case.
Sample Input:
2
3
Sample Output:
even
odd
*/

#include <stdio.h>

int main(){
    int n1,n2 ;
    scanf("%d",&n1);

    switch(n1%2 == 0){
        case 1:
        printf("Even");
        break;

        case 0:
        printf("Odd");
        break;
    }
}
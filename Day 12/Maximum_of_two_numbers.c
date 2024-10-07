/*Write a C program to find the maximum between two numbers using Switch statement.

Sample Input:
20 30

Sample Output
30 is maximum
*/

#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    switch(a>b){

        case 0:
        printf("%d is maximum",b);
        break;

        case 1:
        printf("%d is maximum",a);
        break;
    }

    
}
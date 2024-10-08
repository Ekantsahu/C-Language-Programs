#include <stdio.h>

int main(){
   int n,c=0;
   printf("Enter a number : ");
   scanf("%d",&n);

   while(n!=0){
   c++;
   n/=10;
   }   
   printf("Count of the digits = %d",c);
   return 0;
}
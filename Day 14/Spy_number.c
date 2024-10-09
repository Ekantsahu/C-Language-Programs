#include <stdio.h>

int main(){
    int n,sum = 0,i=1,rem,prod=1;
    scanf("%d",&n);

    while(n){
        rem = n%10;
        sum = sum+rem;
        prod = prod*rem;
        n = n/10;
        
    }
    if (prod==sum)
        {
           printf("Spy Number");
        }else{
            printf("not a spy number");
        }
   

    
}
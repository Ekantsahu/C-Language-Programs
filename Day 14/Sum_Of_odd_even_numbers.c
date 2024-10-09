#include <stdio.h>

int main(){
    int n,os=0,es=0,i=1;
    scanf("%d",&n);
   if(n>0){
    while (i<=n)
    {
        if (n%2==0)
        {
          es = es+n;
        }else {
            
         os = os+n;
        }
        n--;
    }
    printf("Even sum = %d,Odd sum = %d",es,os);
   }else
   {
       printf("Invalid  Input");
   }
    
    return 0;
}
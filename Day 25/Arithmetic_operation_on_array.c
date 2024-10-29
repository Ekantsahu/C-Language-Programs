#include <stdio.h>

int main(){
    int a[100],n,i,sum=0,sub=0,multi=1;

    printf("Enter number in range 1-100: ");
    scanf("%d",&n);

     if(n<1||n>100){
        printf("Please enter the range between 1-100");
    }else{
       printf("Enter %d integer: ",n);
       for(i=0;i<n;i++){
         scanf("%d",&a[i]);
         sum+=a[i];
          if (i == 0) {
                sub = a[i];
            } else {
                sub -= a[i];
            }
        //  sub-=a[i];
         multi*=a[i];
       }

      
       printf("Sum = %d, Sub = %d, Multi = %d",sum,sub,multi);
      
    }
    return 0;
}
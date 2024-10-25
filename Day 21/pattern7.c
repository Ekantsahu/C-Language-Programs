#include <stdio.h>

int main(){
    int n=5;
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
          if(i==1&&j==1){
            printf("%d ",1);
          }
          else{
               printf("%d ", a+=2); 
            }
          }
        a = 2 * i - 1;
        printf("\n");
    }
    return 0;
 }

/*
1
3 5
5 7 9
7 9 11 13
9 11 13 15 17
*/
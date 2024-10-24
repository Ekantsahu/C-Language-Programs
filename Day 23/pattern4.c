#include <stdio.h>

int main(){
    int n=5;

    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-i;space++){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            if(i==1||j==n||i==n||j==1||j==i){
                printf("* ");
            }else{
                printf("  ");
            }
          
        }
        printf("\n");
    }
    return 0;
}

/*
        * 
      * *
    *   *
  *     * 
* * * * *
*/
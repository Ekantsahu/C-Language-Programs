#include <stdio.h>

int main(){
    int n=6;
    int a=1,b;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        a=i;
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a--;
        }
        b=2;
        for(int j=1;j<i;j++){
            printf("%d ",b++);
            
        }
        printf("\n");
    }
    return 0;
}

/*

            1
         2  1  2
      3  2  1  2  3
   4  3  2  1  2  3  4


*/

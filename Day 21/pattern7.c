/*

1
3  5
5  7   9
7  9   11  13
9  11  13  15  17
*/
#include <stdio.h>

int main(){
    int n=5;
    int a=1;

    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
           printf("%d ",a);
           a=a+2;
          
        }
       

        printf("\n");
    }
    return 0;
}
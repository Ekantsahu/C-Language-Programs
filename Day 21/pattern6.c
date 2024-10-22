/*

1
1  2
1     3
1        4
1  2  3  4  5

*/
#include <stdio.h>

int main(){
    int n=5;
    

    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
           if(i==1||i==n||j==1||j==i){
            printf("%d ",j);
           }else{
            printf("  ");
           }
        }
        printf("\n");
    }
    return 0;
}
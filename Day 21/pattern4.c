/*
0  0  0  0  1
0  0  0  1  1
0  0  1  1  1
0  1  1  1  1
1  1  1  1  1*/
#include <stdio.h>

int main(){
    int n=5;

    for(int i=1;i<=n;i++){
        for(int k=1;k<n-i+1;k++){
            printf("%d ",0);
        }
        for(int j=1;j<=i;j++){
            printf("%d " ,1);
          
           
        }
        printf("\n");
    }
    return 0;
}
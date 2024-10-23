#include <stdio.h>

int main(){
    int n = 5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i+j)%2==0){
                printf("0 ");
            }else{
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}

/*
0 1 0 1 0 
1 0 1 0 1
0 1 0 1 0
1 0 1 0 1
0 1 0 1 0
*/
#include <stdio.h>

int main(){
    
    int nr=4;
    int nc=6;
    int a =1;

    for(int i=1;i<=nr;i++){

        for(int j=1;j<=nc;j++){
            if(j%2==0){
                printf("%d ",a++);
            }
            else{
                printf("%d ",i);
            }
        }
        a=1;
        printf("\n");

    }
    return 0;
}

/*
1 1 1 2 1 3 
2 1 2 2 2 3
3 1 3 2 3 3
4 1 4 2 4 3
*/
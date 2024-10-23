#include <stdio.h>

int main(){
    int nr=4;
    int nc=5;
    int a=nc;
   
    

    for(int i=1;i<=nr;i++){
       

        for(int j=1;j<=nc;j++){
            printf("%d ",a);
        }
        a--;
      
        printf("\n");
    }
    return 0;
}

/*
5 5 5 5 5 
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
*/
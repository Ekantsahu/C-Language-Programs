#include <stdio.h>

int main(){
    int n=5;
    

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            
            printf("%d ",i*j);
           
        }
       
        
        printf("\n");
    }
    return 0;
}

/*
1 2 3 4 5 
2 4 6 8 10
3 6 9 12 15
4 8 12 16 20
5 10 15 20 25
*/
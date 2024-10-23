#include <stdio.h>

int main(){
    int n=5;
    
    for(int i=1;i<=n;i++){
        int a=i;
        for(int j=1;j<=n;j++){

            printf("%d ",a++);
        }
        printf("\n");
    }
    return 0;
}

/*
1 2 3 4 5 
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9
*/
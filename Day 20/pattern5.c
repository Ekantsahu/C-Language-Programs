#include <stdio.h>

int main(){
    int n=5;
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",a);
            a--;
        }
        a=n;
        printf("\n");
    }
    return 0;
}

/*
5 4 3 2 1 
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
*/
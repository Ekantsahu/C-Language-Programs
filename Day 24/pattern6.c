#include <stdio.h>

int main(){
    int n=5;
    int a=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a++;
        }
        a=1;
        printf("\n");
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("%d ",a);
            a++;
        }
        a=1;
        printf("\n");
    }
    return 0;
}

/*
1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5 
1 2 3 4
1 2 3
1 2 
1
*/
#include <stdio.h>

int main(){
    int n=5;
    char ch = 'A';

    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            printf("  ");
        }
        for(int j=1;j<=n+1-i;j++){
            printf("%c ",ch);
            ch++;
        }
        ch='A';
        printf("\n");
    }
    return 0;
}

/*
ABCDE
 ABCD
  ABC
   AB
    A
*/
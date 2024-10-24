/*

0  1   1    2    3
   5   8    13   21
       34   55   89
            144  233
                 377

*/

#include<stdio.h>
int main(){
    int n, a = 1, b = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int space = 1; space < i; space++){
            printf("    ");
        }
        for(int j = i; j <= n; j++){
            if(i == 1 && j == 1){
                printf("%4d", 0);
            }
            else if(i == 1 && j == 2){
                printf("%4d", 1);
            }
            else {
                int current = a + b;
                printf("%4d", current);

                b = a;
                a = current;
            }
        }
        printf("\n");
    }
    return 0;
}

/*
   0   1   1   2   3
       5   8  13  21
          34  55  89
             144 233
                 377
*/
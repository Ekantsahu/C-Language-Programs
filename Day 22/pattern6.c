
#include<stdio.h>
int main(){
    int num=5;

    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num; j++){
            if(j < i){
                printf("%d ", i);
            }
            else {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    return 0;
}

/*

1  2  3  4  5
2  2  3  4  5
3  3  3  4  5
4  4  4  4  5
5  5  5  5  5

*/

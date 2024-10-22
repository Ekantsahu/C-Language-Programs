/*

1
2  6
3  7 10
4  8 11 13
5  9 12 14 15
*/
#include <stdio.h>

int n = 5;
int main() {
    for (int row = 1; row <= n; row++) {
        int num = row;  
        for (int col = 1; col <= row; col++) {
            if (col == 1) {
                printf("%d ", num);  
            } else {
                num += n - col + 1;  
                printf("%d ", num);
            }
        }
        printf("\n"); 
    }
    return 0;
}

#include <stdio.h>

int main() {
    int i, j, n = 5;
    
    for (i = 1; i <= n; i++) {
       
        for (j = 1; j < i; j++) {
            printf("  ");
        }
        
       
        for (j = n - i + 1; j >= 1; j--) {
            printf("%d ", j);
        }
        
     
        printf("\n");
    }
    
    return 0;
}


/*

 5  4  3  2  1
    4  3  2  1
       3  2  1
          2  1
             1
*/
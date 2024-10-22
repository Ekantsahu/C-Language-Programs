/*
0
0  1
0  1  1
0  1  1  2
0  1  1  2  3
0  1  1  2  3  5

basically we need to print the fibonacci Series of nth number
*/
#include <stdio.h>

int main() {
    int n = 10; 

    for (int i = 1; i <= n; i++) {
        int a = 0, b = 1, fib = 0; 

        for (int j = 1; j <= i; j++) {
            if (j == 1) {
                fib = 0;  
            } else if (j == 2) {
                fib = 1;  
            } else {
                fib = a + b;  
                a = b;  
                b = fib;
            }
            printf("%d ", fib);  
        }
        printf("\n");  
    }

    return 0;
}

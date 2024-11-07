#include<stdio.h>

int main(){
    int n, count;

    scanf("%d", &n);

    for(int i = 2; i < n; i++){
        for(int j = i + 1; j < n; j++){        
            if(i + j == n){               
                // Prime check for i
                int is_prime_i = 1; // Assume i is prime
                for(int k = 2; k <= i / 2; k++){
                    if(i % k == 0){
                        is_prime_i = 0; // i is not prime
                        break;
                    }
                }

                // Prime check for j
                int is_prime_j = 1; // Assume j is prime
                for(int k = 2; k <= j / 2; k++){
                    if(j % k == 0){
                        is_prime_j = 0; // j is not prime
                        break;
                    }
                }

                // Print the pair if both i and j are prime
                if(is_prime_i && is_prime_j){
                    printf("%d + %d = %d\n", i, j, n);
                }
            }
        }
    }

    return 0;
}
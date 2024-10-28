#include <stdio.h>

int main(){
    int n=5;
    
    

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" -");
        }

        int a=2*i-1;
        for(int j=1;j<=2*i-1;j++){
            printf("%d ", a--);
           
        }
       
        printf("\n");
    }

    return 0;
}

/*
            1
         3  2  1
      5  4  3  2  1
   7  6  5  4  3  2  1
9  8  7  6  5  4  3  2  1


*/

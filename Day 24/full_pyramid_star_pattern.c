// #include <stdio.h>

// int main(){
//     int n=5,c=9;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf("- ");
//         }
//         for(int j=1;j<=i;j++){
//             printf("* ");
//         }
//         for(int j=1;j<i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;

// }


#include <stdio.h>

int main(){
    int  n=5,i,j;

    for(i=1;i<=n;i++){
      for(j=1;j<=n-i;j++){
        printf("  ");
      }
      for(int k=1;k<=2*i-1;k++){
        printf("* ");
      }
        printf("\n");
    }

    return 0;
}

/*
            *
         *  *  *
      *  *  *  *  *
   *  *  *  *  *  *  *
*  *  *  *  *  *  *  *  *

*/
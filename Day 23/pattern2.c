 #include <stdio.h>
 
 int main(){
    int n=5;
    int a=1;

    for(int i=1;i<=n;i++){
         for(int j = n; j >= i; j--){
            printf("%3d",a++);
        }
        printf("\n");
    }
    return 0;
 }
 /*
   1  2  3  4  5
  6  7  8  9
 10 11 12
 13 14
 15
 */
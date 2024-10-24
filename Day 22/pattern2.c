#include <stdio.h>  
int main()   
{  
   int i, j, r;  
   printf("Enter the number of rows: ");  
   scanf("%d", &r);  
   for (i = 1; i<=r; i++)   //2<=5
   {  
          for (j = 1; j <= r; j++)  //2=5 
      {  
            if(i<=j)//2<=2
                printf("%3d",(i*j));
                else
                printf("   ");
           }  
               printf("\n");  
   }  
   return 0;  
}  
/*
1  2  3  4  5
   4  6  8 10
      9 12 15
        16 20
           25

*/
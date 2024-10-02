#include <stdio.h>

int main(){
    int Physics,Chemistry,Biology,Mathematics,Computer ;
    float total,percentage ;
    float Total_Marks = 500;

    printf("Enter the marks of Physics : ",Physics);scanf("%d",&Physics);
    
    printf("Enter the marks of Chemistry :\n ");scanf("%d",&Chemistry);
    
    printf("Enter the marks of Biology : \n");scanf("%d",&Biology);
    
    printf("Enter the marks of Mathematics :\n");scanf("%d",&Mathematics);
    
    printf("Enter the marks of Computer : \n");scanf("%d",&Computer);


    total = Physics+Chemistry+Biology+Mathematics+Computer;
    printf("Total marks = %.2f/%.2f\n",total,Total_Marks);
     percentage = (total/Total_Marks)*100;
     printf("Percentage = %.2f%%\n",percentage);

     if(percentage>=90){
        printf("Grade A");
     }else if(percentage>=80){
        printf("Grade B");
     }else if(percentage>=70){
        printf("Grade C");
     }else if(percentage>=60){
        printf("Grade D");
     }else if(percentage>=40){
        printf("Grade E");
     }else{
        printf("Grade F");
     }
     
     

}
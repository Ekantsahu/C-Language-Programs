#include <stdio.h>

int main(){
    char nationality,gender ;
    int age ;

    printf("Enter the details if you want to check you are eligible for marriage or not as an indian: \n");

    printf("Enter the nationality : \n");
    scanf("%c",&nationality);

    printf("Enter the gender : ");
    scanf(" %c",&gender);

    printf("Enter the age : ");
    scanf(" %d",&age);

    if (nationality == 'I'||nationality == 'i')
    {
        if (gender == 'M'||gender == 'm')
        {
           if (age>=21&&age<=50)
           {
             printf("Congratulatons! you are eligible for marriage");
           }else{
            printf("You are not eligible");
           }
           
        }else if (gender == 'F'|| gender == 'f')
        {
            if (age>=18&&age<=45)
           {
             printf("Congratulations ! You are eligible for marriage");
           }else{
            printf("You are not eligible");
           }
        }else{
            printf("Gender is not valid");
        }
        
        
    }else{
        printf("Sorry you are not an indian citizen");
    }
    
    
}
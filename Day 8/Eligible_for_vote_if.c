#include <stdio.h>

int main(){
    int age ;
    printf("Enter the age : ");
    scanf("%d",&age);
    char name [30] ;
    printf("Enter the name : ");
    scanf("%s",&name);


    if(age < 18){
        printf("Sorry %s you are not eligible to vote.");
    }
    if(age >= 18){
        printf("Hii %s you are  eligible to vote.");
    }
}
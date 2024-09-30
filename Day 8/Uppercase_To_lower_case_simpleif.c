
#include <stdio.h>

int main(){
    char ch ;
    printf("Enter any character : ");
    scanf("%c",&ch);
   
    if (ch>='A'&& ch<='Z'){
        printf("Lower of this character is = %c",ch+32);
    }
     if (ch>='a'&& ch<='z'){
        printf("Lower of this character is = %c",ch);
    }


}
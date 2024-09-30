#include <stdio.h>

int main(){
    char ch ;
    printf("Enter any character : ");
    scanf("%c",&ch);

    if(ch >= 'a'&& ch <= 'z'){
        printf("Lowercase ");
    }
    if(ch >= 'A'&& ch <= 'Z'){
        printf("Uppercase ");
    }
}
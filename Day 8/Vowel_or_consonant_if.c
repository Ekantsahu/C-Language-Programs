#include <stdio.h>

int main(){
    char ch ;
    printf("Enter any character : ");
    scanf("%c",&ch);
   

    if(ch == 'a'|| ch == 'A'||ch == 'e'||ch == 'E'||ch == 'i'||ch == 'I'||ch == 'o'||ch == 'O'||ch == 'u'||ch == 'U' ){
        printf("Vowel");
    }

    if(!(ch == 'a'|| ch == 'A'||ch == 'e'||ch == 'E'||ch == 'i'||ch == 'I'||ch == 'o'||ch == 'O'||ch == 'u'||ch == 'U')){
        printf("Consonant");
    }
    

    
}

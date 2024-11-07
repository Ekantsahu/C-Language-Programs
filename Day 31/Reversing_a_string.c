#include <stdio.h>

int main(){
    char str[] = "Ekant kumar";
    int length = 0;

    for(int i=0;str[length]!='\0';i++){
        length++;
    }

    printf("Orignal string: \n");
    for(int i=0;i<length;i++){
        printf("%c",str[i]);
    }
     printf("\nReversed string: \n");
    for(int i=length-1;i>=0;i--){
        printf("%c",str[i]);
    }


    return 0;
}
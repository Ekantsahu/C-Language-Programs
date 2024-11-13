#include <stdio.h>

int main(){
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]",str);

    while (str[length]!='\0')
    {
        length++;
    }


    if(length>1){
        int temp;
        temp=str[0];
        str[0]=str[length-1];
        str[length-1]=temp;
    }
        
        printf("%s",str);
    return 0;
}
#include <stdio.h>

int main(){
    char str[100];
    int length = 0,f=1;

    printf("Enter the string : ");
    scanf("%[^\n]",str);

    printf("Orignal String: ");
    printf("%s",str);

    while(str[length]!='\0'){
        length++;
    }
    printf("\nThe length of the string is %d\n",length);


    //For converting uppercase into lowercase
     for(int i=0; i<length; i++){
        if(str[i]>'A' && str[i]<'Z'){
            str[i]=str[i]+32;
        }
    }
       printf("%s\n",str);


    for (int i = 0; i < length / 2; i++) {
        if ((str[i]) != (str[length - 1 - i])) {
            f = 0; //not a palindrome 
        }
    }

    if(f){
        printf("It is a palindrome string..");
    }else{
        printf("It is not a palindrome string..");
    }
    return 0;
}
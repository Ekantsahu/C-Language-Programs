#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    char temp;
    int length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    for(int i=0;str[length]!='\0';i++){
        length++;
    }

    
    for(int i = 0; i < length - 1; i++){
        for(int j = i + 1; j < length; j++){
            if(str[i] > str[j]){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("Sorted string: %s\n", str);
    return 0;
}

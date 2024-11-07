#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, specialChars = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);


   for(int i=0;str[length]!='\0';i++){
    length++;
   }
    printf("\nLength of string is %d\n", length);

    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        
        else if (ch == ' ') {
            spaces++;
        }

        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
        
        else {
            specialChars++;
        }
    }

    
    printf("Vowels count: %d\n", vowels);
    printf("Consonants count: %d\n", consonants);
    printf("Digits count: %d\n", digits);
    printf("Spaces count: %d\n", spaces);
    printf("Special characters count: %d\n", specialChars);

    return 0;
}

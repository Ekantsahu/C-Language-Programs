/*
Write a C program to check whether a given Alphabet is vowel or consonant or Special characer using Switch Case.

Sample input  : A
Sample output : Vowel

Sample input  : B
Sample output : Consonant

Sample input  : @
Sample output : Special character
*/

#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);

    switch (ch) {
        case 'A': case 'E': case 'I': case 'O': case 'U':
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("Vowel\n");
            break;
        
        default:
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
                printf("Consonant");
            else
                printf("Special character");
            break;
    }

    return 0;
}

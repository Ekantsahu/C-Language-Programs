#include <stdio.h>
#include <ctype.h> 

int isPalindromString(char str[]) {
    int start = 0;
    int end;

   
    while (str[start] != '\0') {
        start++;
    }
    end = start - 1;  
    start = 0;        

   
    while (start < end) {
        if (tolower(str[start]) != tolower(str[end])) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Is a palindrome
}

int main() {
    char str[100];

    printf("Input a string: ");
    scanf("%s", str);

    int result = isPalindromString(str);

    if (result == 1) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

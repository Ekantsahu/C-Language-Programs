#include <stdio.h>

int getLength(char str[]) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char str[100];
    int length;

    printf("Enter a string: ");
    scanf("%s", str);

    length = getLength(str);

    printf("Length of the string: %d\n", length);

    return 0;
}

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int len1 = 0, len2 = 0;
    int count1[256] = {0};  // Array to store character frequencies for str1
    int count2[256] = {0};  // Array to store character frequencies for str2

    // Input strings
    printf("Enter string 1: ");
    scanf("%[^\n]", str1);

    // Clearing the input buffer to take the next string
    getchar(); 

    printf("Enter string 2: ");
    scanf("%[^\n]", str2);

    // Calculate length of str1
    while (str1[len1] != '\0') {
        len1++;
    }

    // Calculate length of str2
    while (str2[len2] != '\0') {
        len2++;
    }

    // If lengths are not the same, they cannot be anagrams
    if (len1 != len2) {
        printf("These are not anagram strings.\n");
        return 0;
    }

    // Count frequency of each character in str1
    for (int i = 0; i < len1; i++) {
        count1[(int)str1[i]]++;
    }

    // Count frequency of each character in str2
    for (int i = 0; i < len2; i++) {
        count2[(int)str2[i]]++;
    }

    // Compare the frequency arrays
    int isAnagram = 1;
    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            isAnagram = 0;
            break;
        }
    }

    // Output the result
    if (isAnagram) {
        printf("These are anagram strings.\n");
    } else {
        printf("These are not anagram strings.\n");
    }

    return 0;
}

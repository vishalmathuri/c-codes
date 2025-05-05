#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 256  // Maximum number of ASCII characters

int areAnagrams(char str1[], char str2[]) {
    int count[SIZE] = {0};

    // If lengths are not equal, not anagrams
    if (strlen(str1) != strlen(str2))
        return 0;

    // Count characters in str1 and subtract for str2
    for (int i = 0; str1[i]; i++) {
        count[tolower(str1[i])]++;
        count[tolower(str2[i])]--;
    }

    // Check if all counts are 0
    for (int i = 0; i < SIZE; i++) {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2))
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}

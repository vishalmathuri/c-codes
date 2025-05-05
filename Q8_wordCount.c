// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     FILE *file;
//     char filename[100];
//     char ch;
//     int lines = 0, words = 0, characters = 0;
//     int inWord = 0;

//     // Ask for filename
//     printf("Enter the file name: ");
//     scanf("%s", filename);

//     // Open file in read mode
//     file = fopen(filename, "r");
//     if (file == NULL) {
//         printf("Could not open file %s\n", filename);
//         return 1;
//     }

//     // Read file character by character
//     while ((ch = fgetc(file)) != EOF) {
//         characters++;

//         if (ch == '\n') {
//             lines++;
//         }

//         if (isspace(ch)) {
//             inWord = 0;
//         } else if (inWord == 0) {
//             inWord = 1;
//             words++;
//         }
//     }

//     // Close file
//     fclose(file);

//     // Print results
//     printf("Lines: %d\n", lines);
//     printf("Words: %d\n", words);
//     printf("Characters: %d\n", characters);

//     return 0;
// }

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int lines = 0, words = 0, characters = 0;
    int inWord = 0;
    int lastCharWasNewline = 0;

    printf("Enter the file name: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
            lastCharWasNewline = 1;
        } else {
            lastCharWasNewline = 0;
        }

        if (isspace(ch)) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    // If file wasn't empty and last line didn't end with '\n', count that last line
    if (characters > 0 && !lastCharWasNewline) {
        lines++;
    }

    fclose(file);

    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Characters: %d\n", characters);

    return 0;
}

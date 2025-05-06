#include<stdio.h>
#include<string.h>
#define Max_strings 100
#define Max_length 100

int main() {
    char str[Max_strings][Max_length], temp[Max_length];
    int n, i, j;
    printf("Enter number of strings: ");
    scanf("%d", &n);

    getchar();

    printf("Enter %d strings:\n", n);
    
    for (i = 0; i < n; i++) {
        fgets(str[i], Max_length, stdin);
        str[i][strcspn(str[i], "\n")] = '\0';  // Remove newline character
    }

    // Bubble sort based on strcmp
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("\nStrings in alphabetical order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }


    return 0;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isFileName(const char *word) {
    const char *dot = strrchr(word, '.');
    if (dot != NULL && dot != word) {
        int extLen = strlen(dot + 1);
        if (extLen >= 2 && extLen <= 5) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char str[200];
    char result[200] = "";
    char word[50];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Split string into words
    char *token = strtok(str, " \n");
    while (token != NULL) {
        if (!isFileName(token)) {
            strcat(result, token);
            strcat(result, " ");
        }
        token = strtok(NULL, " \n");
    }

    printf("\nString after removing file names:\n%s\n", result);

    return 0;
}


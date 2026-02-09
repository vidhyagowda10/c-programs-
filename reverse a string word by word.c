#include <stdio.h>
#include <string.h>

void reverseWords(char str[]) {
    char temp[100][100];
    int i = 0, j = 0, k = 0;


    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            temp[k][j] = '\0';
            k++;
            j = 0;
        } else {
            temp[k][j++] = str[i];
        }
    }
    temp[k][j] = '\0';
    int wordCount = k;
    printf("Reversed string word by word:\n");
    for (i = wordCount; i >= 0; i--) {
        printf("%s", temp[i]);
        if (i > 0) printf(" ");
    }
    printf("\n");
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    reverseWords(str);

    return 0;
}

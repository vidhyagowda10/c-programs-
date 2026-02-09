#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int digits = 0, alphabets = 0, special = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (isdigit((unsigned char)str[i])) {
            digits++;
        } else if (isalpha((unsigned char)str[i])) {
            alphabets++;
        } else if (str[i] != ' ' && str[i] != '\n') {
            special++;
        }
    }
    printf("\nCount Results:\n");
    printf("Digits: %d\n", digits);
    printf("Alphabets: %d\n", alphabets);
    printf("Special Characters: %d\n", special);

    return 0;
}

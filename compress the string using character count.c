#include <stdio.h>
#include <string.h>

void compressString(char str[]) {
    int i, count;
    int len = strlen(str);

    printf("Compressed string: ");
    for (i = 0; i < len; i++) {
        count = 1;
        while (i < len - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        printf("%c%d", str[i], count);
    }
    printf("\n");
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    compressString(str);

    return 0;
}

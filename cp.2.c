#include <stdio.h>
#include <string.h>

int main() {

    char valid_username[] = "Admin";
    char valid_password[] = "Admin@123;char input_username[50];
    char input_password[50];
    printf("Enter username: ");
    scanf("%s", input_username);
    printf("Enter password: ");
    scanf("%s", input_password);
     if (strcmp(input_username, valid_username) == 0 && strcmp(input_password, valid_password) == 0) {
        printf("\nLogin Successful! Welcome, %s.\n", input_username);
    } else {
        printf("\nInvalid username or password. Please try again.\n");
    }
    return 0;
}

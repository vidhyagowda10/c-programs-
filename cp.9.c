#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    // Swapping
    temp = a;
    a = b;
    b = temp;
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
Output:
Enter two numbers: 5 10
After swapping:
a = 10
b = 5


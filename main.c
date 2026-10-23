#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a: ");
    scanf_s("%d", &a);
    printf("Enter b: ");
    scanf_s("%d", &b);
    printf("Sum = %d", a + b);

    return 0;
}
//3.	Write a C program to swap two numbers without using a temporary variable.
#include <stdio.h>

int main() {
    int a, b;

    // Input
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Swapping without temporary variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Output
    printf("\nAfter swapping:");
    printf("\na = %d", a);
    printf("\nb = %d", b);

    return 0;
}
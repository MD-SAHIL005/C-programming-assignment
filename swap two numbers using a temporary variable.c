//2.	Write a C program to swap two numbers using a temporary variable
#include <stdio.h>

int main() {
    int a, b, temp;

    // Input
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Swapping using temporary variable
    temp = a;
    a = b;
    b = temp;

    // Output
    printf("\nAfter swapping:");
    printf("\na = %d", a);
    printf("\nb = %d", b);

    return 0;
}
//1.	Write a C program to find the sum, difference, product, and division of two numbers.
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Arithmetic operations
    int sum = a + b;
    int diff = a - b;
    int prod = a * b;

    printf("\nSum = %d", sum);
    printf("\nDifference = %d", diff);
    printf("\nProduct = %d", prod);
    return 0;
}
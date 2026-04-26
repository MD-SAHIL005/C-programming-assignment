//4.	Write a C program to calculate the average of three numbers.
#include <stdio.h>

int main() {
    int a, b, c;
    float average;

    // Input
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Calculate average
    average = (a + b + c) / 3.0;

    // Output
    printf("Average = %.2f", average);

    return 0;
}
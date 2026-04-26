//7.	Write a C program to demonstrate the use of constant values (const) in C.
#include <stdio.h>

int main() {
    const float PI = 3.14159;   // constant value
    float radius, area;

    // Input
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    // Using constant
    area = PI * radius * radius;

    // Output
    printf("Area of circle = %.2f", area);

    return 0;
}
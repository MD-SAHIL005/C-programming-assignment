//8.	Write a C program to find the square and cube of a number.
#include <stdio.h>

int main() {
    int num;
    int square, cube;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculations
    square = num * num;
    cube = num * num * num;

    // Output
    printf("\nSquare = %d", square);
    printf("\nCube = %d", cube);

    return 0;
}
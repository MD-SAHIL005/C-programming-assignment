//6.	Write a C program to calculate the total and average marks of three subjects.
#include <stdio.h>

int main() {
    float sub1, sub2, sub3, total, average;

    // Input
    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &sub1, &sub2, &sub3);

    // Calculate total and average
    total = sub1 + sub2 + sub3;
    average = total / 3;

    // Output
    printf("\nTotal Marks = %.2f", total);
    printf("\nAverage Marks = %.2f", average);

    return 0;
}
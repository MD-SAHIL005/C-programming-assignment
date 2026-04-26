//5.	Write a C program to convert kilometers into meters and centimeters.
#include <stdio.h>

int main() {
    float km, meters, centimeters;

    // Input
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    // Conversion
    meters = km * 1000;        // 1 km = 1000 meters
    centimeters = km * 100000; // 1 km = 100000 centimeters

    // Output
    printf("\nMeters = %.2f", meters);
    printf("\nCentimeters = %.2f", centimeters);

    return 0;
}
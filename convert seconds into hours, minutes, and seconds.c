//9.	Write a C program to convert seconds into hours, minutes, and seconds.
#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input
    printf("Enter total seconds: ");
    scanf("%d", &totalSeconds);

    // Conversion
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    // Output
    printf("\nHours = %d", hours);
    printf("\nMinutes = %d", minutes);
    printf("\nSeconds = %d", seconds);

    return 0;
}
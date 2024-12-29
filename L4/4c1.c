#include <stdio.h>

int main() {
    int seconds, hours, minutes;

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds %= 3600;
    minutes = seconds / 60;
    seconds %= 60;

    printf("The time in HH:MM:SS format is: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}

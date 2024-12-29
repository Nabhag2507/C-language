#include <stdio.h>

int main() {
    int num; 
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Number in reverse order: ");
    while (num > 0) {
        int digit = num % 10;
        printf("%d", digit);
        num /= 10;
    }

    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    int num, countOdd = 0, countEven = 0;

    printf("Enter 10 numbers:\n");

    for (int i = 1; i <= 10; ++i) {
        printf("Number %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
    }

    printf("\nSummary:\n");
    printf("Even numbers: %d\n", countEven);
    printf("Odd numbers: %d\n", countOdd);

    return 0;
}

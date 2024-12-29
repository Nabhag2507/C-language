#include <stdio.h>

void main() {
    int n;
    printf("Enter a decimal n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
    }

    int binary[32];
    int index = 0;

    while (n > 0) {
        binary[index] = n % 2;
        n /= 2;
        index++;
    }

    printf("Binary representation: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

}

#include <stdio.h>

int main() {
    int decimalNumber, binary[32], index = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    
    if (decimalNumber == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (decimalNumber > 0) {
        binary[index] = decimalNumber % 2;
        decimalNumber = decimalNumber / 2;
        index++;
    }

    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
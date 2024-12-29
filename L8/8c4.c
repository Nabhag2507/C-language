#include <stdio.h>

int main() {
    int num1, num2;
    int product = 0;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int sign = 1;
    if (num1 < 0) {
        num1 = -num1;
        sign = -sign;
    }
    if (num2 < 0) {
        num2 = -num2;
        sign = -sign;
    }

    for (int i = 0; i < num2; ++i) {
        product += num1;
    }

    product *= sign;

    printf("Product: %d\n", product);

    return 0;
}

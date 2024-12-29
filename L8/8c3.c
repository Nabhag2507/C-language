#include <stdio.h>

int main() {
    int dividend, divisor;

    printf("Enter the dividend: ");
    scanf("%d", &dividend);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0) {
        printf("Error: Cannot divide by zero.\n");
        return 1;
    }

    int quotient = 0;
    int remainder = 0;

    int sign = 1;
    if ((dividend < 0) ^ (divisor < 0)) {
        sign = -1;
    }

    dividend = abs(dividend);
    divisor = abs(divisor);

    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    }

    remainder = dividend;

    quotient *= sign;

        printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}

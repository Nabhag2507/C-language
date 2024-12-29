#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int originalNum = num;
    int numDigits = 0;
    int sum = 0;

    while (num > 0) {
        numDigits++;
        num /= 10;
    }

    num = originalNum;
    int digit;

    while (num > 0) {
        digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }

    if (sum == originalNum) {
        printf("%d is an Armstrong number \n", originalNum);
    } else {
        printf("%d is not an Armstrong number \n", originalNum);
    }

    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, firstDigit, lastDigit, swappedNum;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    int temp = num;
    int numDigits = 0;
    while (temp > 0) {
        temp /= 10;
        numDigits++;
    }

    firstDigit = originalNum / (int)pow(10, numDigits - 1);
    lastDigit = originalNum % 10;

    swappedNum = lastDigit * (int)pow(10, numDigits - 1);
    swappedNum += (originalNum % (int)pow(10, numDigits - 1)) / 10;
    swappedNum += firstDigit;

    printf("Number with swapped first and last digits: %d\n", swappedNum);

    return 0;
}

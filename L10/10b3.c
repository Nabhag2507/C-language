#include <stdio.h>

int main() {
    int num; 
    printf("Enter an integer: ");
    scanf("%d", &num);

    int originalNum = num;
    int reversedNum = 0;

    int temp;
    while (num > 0) {
        temp = num % 10;
        reversedNum = reversedNum * 10 + temp;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("%d is a palindrome! 🌟\n", originalNum);
    } else {
        printf("%d is not a palindrome. But hey, it's still pretty cool! 😊\n", originalNum);
    }

    return 0;
}

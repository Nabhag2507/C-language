#include <stdio.h>

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int sum = 1;

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }

    if (sum == num) {
        printf("%d is a perfect number! 🌟\n", num);
    } else {
        printf("%d is not a perfect number. But hey, it's still pretty cool! 😊\n", num);
    }

    return 0;
}

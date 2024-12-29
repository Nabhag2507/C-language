#include <stdio.h>

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Neither prime nor composite.\n");
        return 0;
    }

   
    int isPrime = 1;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime) {
        printf("%d is a prime number! 🌟\n", num);
    } else {
        printf("%d is not a prime number. 😔\n", num);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum of the first %d natural numbers: %d\n", n, sum);

    return 0;
}

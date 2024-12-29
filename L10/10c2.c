#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers.\n");
        return 1;
    }

    int smaller = (num1 < num2) ? num1 : num2;
    int hcf = 1;

    for (int i = 1; i <= smaller; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    int lcm = (num1 * num2) / hcf;

    printf("HCF (GCD) of %d and %d: %d\n", num1, num2, hcf);
    printf("LCM of %d and %d: %d\n", num1, num2, lcm);

    return 0;
}

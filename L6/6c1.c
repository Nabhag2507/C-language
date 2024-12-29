#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        if (b >= c)
            printf("%.2d is the second largest number.\n", b);
        else
            printf("%.2d is the second largest number.\n", c);
    } else if (b >= a && b >= c) {
        if (a >= c)
            printf("%.2d is the second largest number.\n", a);
        else
            printf("%.2d is the second largest number.\n", c);
    } else {
        printf("%.2d is the second largest number.\n", a);
    }

    return 0;
}

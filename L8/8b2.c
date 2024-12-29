#include <stdio.h>

int main() {
    printf("Numbers between 100 and 200:\n");

    for (int num = 101; num < 200; ++num) {
        if (num % 7 == 0 && num % 5 != 0) {
            printf("%d\n", num);
        }
    }

    return 0;
}

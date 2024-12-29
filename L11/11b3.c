#include <stdio.h>

int main() {
    printf("ASCII Characters and Their Decimal Values:\n");
    for (int i = 0; i < 128; i++) {
        printf("Character: %c\tDecimal Value: %d\n", i, i);
    }
    return 0;
}

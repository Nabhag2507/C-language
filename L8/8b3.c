#include <stdio.h>

int main() {
    int count = 0;
    int term = 1;
    printf("The first 50 numbers in the series:\n");

    while (count < 50) {
        printf("%d ", term);
        term += 3; 
        count++;
    }

    printf("\n");

    return 0;
}

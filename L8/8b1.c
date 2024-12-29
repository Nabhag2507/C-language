#include <stdio.h>
#include <math.h> 

int main() {
    printf("Number | Square Root\n");
    printf("---------------------\n");

    for (int num = 0; num <= 9; ++num) {
        float squareRoot = sqrt(num);
        printf("%2d     | %.4f\n", num, squareRoot);
    }

    return 0;
}

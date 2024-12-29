#include <stdio.h>

int main() {
    int count = 0; 
    int sum = 0;   

    printf("Squares with last digit 3:\n");

    for (int num = 1; num <= 10;num++) {
        int square = num * num;
        if (square % 10 == 3) {
            printf("%d^2 = %d\n", num, square);
            sum += square;
            count++;
        }
    }

    if (count > 0) {
        double average = (double)sum / count;
        printf("\nSum of valid squares: %d\n", sum);
        printf("Average of valid squares: %.2lf\n", average);
    } else {
        printf("No valid squares found.\n");
    }

    return 0;
}

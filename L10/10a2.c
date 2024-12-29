#include <stdio.h>

int main() {
    int count;
    double sum = 0.0;
    double average;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &count);

    if (count <= 0) {
        printf("Please enter a positive count.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", count);

    for (int i = 1; i <= count; ++i) {
        double num;
        printf("Number %d: ", i);
        scanf("%lf", &num);
        sum += num; 
    }

    average = sum / count;

    printf("Sum: %.2lf\n", sum);
    printf("Average: %.2lf\n", average);

    return 0;
}

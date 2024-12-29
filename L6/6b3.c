#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3)
       { printf("The given triangle is equilateral.\n");}
    else if (side1 == side2 || side2 == side3 || side3 == side1)
       { printf("The given triangle is isosceles.\n");}
    else
       { printf("The given triangle is scalene.\n");}

    if (side1 * side1 + side2 * side2 == side3 * side3 ||
        side2 * side2 + side3 * side3 == side1 * side1 ||
        side3 * side3 + side1 * side1 == side2 * side2)
       { printf("The given triangle is also a right-angled triangle.\n");
}
    return 0;
}

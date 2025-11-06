/*
 * v1 - Write a program that ask the user to enter a value for x and then display the value of the following
 * polynomial: 3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6.
 *
 * v2 - Write a program that ask the user to enter a value for x and then display the value of the following
 * polynomial: ((((3x + 2)x - 5x)x - 1) x + 7) x - 6 .
 */

#include <stdio.h>

int main(void)
{
    int x = 0, result = 0, result2 = 0;

    printf("Value of x: ");
    scanf("%d", &x);

    // Answer for v1
    result = (3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6;
    printf("Result v1: %d\n", result);

    // Answer for v2
    result2 = (((3 * x) + 2) * (x - (5 * x)) * (x - 1) * (x + 7)) * (x - 6);
    printf("Result v2: %d\n", result2);

    return 0;
}
/*
 * Computes the volume of a sphere.
 */

#include <stdio.h>

#define PI_VALUE 3.1416f
#define FRACTION_VALUE (4.0f / 3.0f)

int main(void)
{
    float radius = 0, volume = 0;

    printf("Radius of the sphere: ");
    scanf("%f", &radius);

    volume = FRACTION_VALUE * PI_VALUE * (radius * radius * radius);

    printf("Volume of the sphere :%.2f\n", volume);

    return 0;
}
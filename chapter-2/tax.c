/*
 * Write a program that asks the user to enter a dollars-and-cents ammount, then display
 * the ammount with 5% tax added.
 */

#include <stdio.h>

#define TAX_RATE (5.0f / 100.0f)

int main(void)
{
    float ammount = 0, ammount_total = 0;

    printf("Enter an ammount: ");
    scanf("%f", &ammount);

    ammount_total = ammount + (ammount * TAX_RATE);

    printf("With tax added: %.2f\n", ammount_total);

    return 0;
}

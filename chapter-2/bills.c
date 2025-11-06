/*
 * Write a program that asks the user to enter a U.S. dollar amount and then shows
 * how to pay that amount using the smallest number of $20, $10, $5 and $1 bill.
 */

#include <stdio.h>

int main(void)
{
    int amount = 0, bill20 = 0, bill10 = 0, bill5 = 0, bill1 = 0;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    bill20 = amount / 20;
    amount = amount - (bill20 * 20);

    bill10 = amount / 10;
    amount = amount - (bill10 * 10);

    bill5 = amount / 5;
    amount = amount - (bill5 * 5);

    bill1 = amount / 1;

    printf("$20 bills: %d\n", bill20);
    printf("$10 bills: %d\n", bill10);
    printf("$5 bills: %d\n", bill5);
    printf("$1 bills: %d\n", bill1);

    return 0;
}
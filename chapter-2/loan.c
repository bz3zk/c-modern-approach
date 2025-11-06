/*
 * Write a program that calculates the remaining balance on a loan after the first, second and
 * third monthly payments.
 */

#include <stdio.h>

int main(void)
{
    float loan = 0, interest_rate = 0, monthly_interest_rate = 0, monthly_payment = 0, balance = 0;

    printf("Enter the amount of the loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enther monthly payment: ");
    scanf("%f", &monthly_payment);

    monthly_interest_rate = ((interest_rate / 100.0f) / 12.0f) * loan;
    balance = (loan - monthly_payment) + monthly_interest_rate;
    printf("Balance remaining after first payment: %.2f\n", balance);

    monthly_interest_rate = ((interest_rate / 100.0f) / 12.0f) * balance;
    balance = (balance - monthly_payment) + monthly_interest_rate;
    printf("Balance remaining after second payment: %.2f\n", balance);

    monthly_interest_rate = ((interest_rate / 100.0f) / 12.0f) * balance;
    balance = (balance - monthly_payment) + monthly_interest_rate;
    printf("Balance remaining after third payment: %.2f\n", balance);

    return 0;
}
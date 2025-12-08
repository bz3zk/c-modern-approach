/*
 * Write a program that formats product information entered by the user.
 * A session with the program should look like this:
 * Item           Unit              Purchase
 *                Price             Date
 * 583            $  13.50          10/24/2010
 * */

#include <stdio.h>

int main(void){
  int item, day, month, year;
  float price;

  printf("Enter item number: ");
  scanf("%d", &item);

  printf("Enter unit price: ");
  scanf("%f", &price);

  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Item\t\t\tUnit\t\t\tPurchase\n");
  printf("\t\t\tPrice\t\t\tDate\n");
  printf("%-5d\t\t\t$%5.2f\t\t\t%2d/%2d/%4d\n", item, price, month, day, year);

  return 0;
}

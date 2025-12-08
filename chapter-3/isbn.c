/*
 * Write a program that breaks down an ISBN entered by the user
 * */

#include <stdio.h>

int main(void){
  int digit1, digit2, digit3, digit4, digit5;

  printf("Enter ISBN (13 digits): ");
  scanf("%d-%d-%d-%d-%d", &digit1, &digit2, &digit3, &digit4, &digit5);

  printf("GS1 prefix: %d\nGroup Identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", digit1, digit2, digit3, digit4, digit5);

  return 0;
}

/*
 * Write a program that prompts the user to enter a telephone number in the form (xxx)xxx-xxxx and then display the number in the form xxx.xxx.xxxx
 * */

#include <stdio.h>

int main(void){
  int digit1, digit2, digit3;

  printf("Enter a phone number [(xxx)xxx-xxxx]: ");
  scanf("(%d)%d-%d", &digit1, &digit2, &digit3);

  printf("You entered: %3d.%3d.%4d\n", digit1, digit2, digit3);

  return 0;
}

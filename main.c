#include <stdio.h>

int addition() {
  int number1, number2, result = 0;
  printf("First number: ");
  scanf("%d", &number1);
  printf("Second number: ");
  scanf("%d", &number2);
  result = number1 + number2;
  return result;
}

int substruction() {
  int number1, number2, result;
  printf("First number: ");
  scanf("%d", &number1);
  printf("Second number: ");
  scanf("%d", &number2);
  result = number1 - number2;
  return result;
}

int division() {
  int number1, number2, result;
  printf("First number: ");
  scanf("%d", &number1);
  printf("Second number: ");
  scanf("%d", &number2);
  result = number1 / number2;
  return result;
}

int multiplication() {
  int number1, number2, result;
  printf("First number: ");
  scanf("%d", &number1);
  printf("Second number: ");
  scanf("%d", &number2);
  result = number1 * number2;
  return result;
}

int main() {
  int choose, result;
  printf("----Calculator----\n");
  printf("Whitch action do you want to choose?\n");
  printf("1 - +\n2 -\"-\"\n3 - /\n4 - *");
  scanf("%d", &choose);
  switch (choose) {
    case 1:
      result = addition();
      break;
    case 2:
      result = substruction();
      break;
    case 3:
      result = division();
      break;
    case 4:
      result = multiplication();
      break;

    default:
      break;
  }
  printf("Result: %d", result);
  return 0;
}
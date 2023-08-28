#include <stdio.h>

int main() {
  int number;

  printf("Enter a number between 1 to 5: ");
  scanf("%d", &number);

  switch (number) {
    case 1:
      printf("The number is 1.\n");
      break;
    case 2:
      printf("The number is 2.\n");
      break;
    case 3:
      printf("The number is 3.\n");
      break;
    case 4:
      printf("The number is 4.\n");
      break;
    case 5:
      printf("The number is 5.\n");
      break;
    default:
      printf("The number is not between 1 to 5.\n");
      break;
  }

  return 0;
}

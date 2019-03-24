#include <stdio.h>
int main() {
  int code, amount;
  float price;

  scanf("%i %i", &code, &amount);

  switch(code) {
    case 1:
    price = 4.0;
    break;

    case 2:
    price = 4.5;
    break;

    case 3:
    price = 5.0;
    break;

    case 4:
    price = 2.0;
    break;

    case 5:
    price = 1.5;
    break;
  }

  printf("Total: R$ %.2f\n", amount * price);
}

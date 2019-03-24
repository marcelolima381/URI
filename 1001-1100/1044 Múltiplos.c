#include <stdio.h>
int main() {
  int val1, val2;

  scanf("%i %i", &val1, &val2);

  if (val1 % val2 == 0 || val2 % val1 == 0) {
    printf("Sao Multiplos\n");
  }
  else {
    printf("Nao sao Multiplos\n");
  }
}

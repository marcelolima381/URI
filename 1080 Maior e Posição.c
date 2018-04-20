#include <stdio.h>
int main() {
  int i, val, maior, posicao = 1;

  scanf("%i", &val);
  maior = val;

  for (i = 2; i <= 100; i++) {
      scanf("%i", &val);
      if (val > maior) {
        maior = val;
        posicao = i;
      }
  }
  printf("%i\n%i\n", maior, posicao);
}

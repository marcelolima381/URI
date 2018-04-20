#include <stdio.h>
int main() {
  int par = 0, impar = 0, positivo = 0, negativo = 0, i, val;

  for(i = 0; i < 5; i++) {
    scanf("%i", &val);
    if (val > 0)
      positivo++;
    else if(val < 0)
      negativo++;
    if (val % 2 == 0)
      par++;
    else
      impar++;
  }

  printf("%i valor(es) par(es)\n", par);
  printf("%i valor(es) impar(es)\n", impar);
  printf("%i valor(es) positivo(s)\n", positivo);
  printf("%i valor(es) negativo(s)\n", negativo);
}

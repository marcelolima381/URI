#include <stdio.h>
int main() {
  int i, n, val, totalCobaias, totalCoelhos, totalRatos, totalSapos;
  char animal;
  totalCobaias = totalCoelhos = totalRatos = totalSapos = 0;

  scanf("%i", &n);

  for(i = 0; i < n; i++) {
    scanf("%i %c", &val, &animal);
    switch (animal) {
      case 'C':
      totalCoelhos += val;
      totalCobaias += val;
      break;

      case 'R':
      totalRatos += val;
      totalCobaias += val;
      break;

      case 'S':
      totalSapos += val;
      totalCobaias += val;
      break;
    }
  }

  printf("Total: %i cobaias\n", totalCobaias);
  printf("Total de coelhos: %i\n", totalCoelhos);
  printf("Total de ratos: %i\n", totalRatos);
  printf("Total de sapos: %i\n", totalSapos);
  printf("Percentual de coelhos: %.2f %%\n", (float)totalCoelhos/totalCobaias*100);
  printf("Percentual de ratos: %.2f %%\n", (float)totalRatos/totalCobaias*100);
  printf("Percentual de sapos: %.2f %%\n", (float)totalSapos/totalCobaias*100);
}

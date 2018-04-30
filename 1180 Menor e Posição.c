#include <stdio.h>
#include <stdlib.h>
int main() {
  int n, i = 0, *vet, pos, val;

  scanf("%i", &n);

  vet = (int *) malloc (n * sizeof(int));

  scanf("%i", &vet[i]);
  pos = i;
  val = vet[i];

  for(i = 1; i < n; i++) {
      scanf("%i", &vet[i]);
      if (vet[i] < val) {
        pos = i;
        val = vet[i];
      }
  }

  printf("Menor valor: %i\n", val);
  printf("Posicao: %i\n", pos);
}

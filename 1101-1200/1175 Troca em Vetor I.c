#include <stdio.h>
int main() {
  int vet[20], i, j;

  for(i = 19; i >= 0; i--) {
    scanf("%i", &vet[i]);
  }

  for(i = 0; i < 20; i++) {
    printf("N[%i] = %i\n", i, vet[i]);
  }
}

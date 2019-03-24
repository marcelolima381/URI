#include <stdio.h>
int main() {
  int val, i, vet[10];

  scanf("%i", &val);

  vet[0] = val;
  printf("N[0] = %i\n", val);
  for(i = 1; i < 10; i++) {
    vet[i] = vet[i-1]*2;
    printf("N[%i] = %i\n", i, vet[i]);
  }
}

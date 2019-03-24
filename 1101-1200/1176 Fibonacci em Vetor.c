#include <stdio.h>
int main() {
  int n, i, j, fibo;
  long long int prim = 0, seg = 1, prox;

  scanf("%i", &n);

  for(i = 0; i < n; i++) {
    scanf("%i", &fibo);
    if (fibo == 0) {
      printf("Fib(0) = 0\n");
    }
    else {
      prim = 0;
      seg = 1;
      for(j = 0; j <= fibo; j++) {
        if (j <= 1) {
          prox = j;
        } else {
          prox = prim + seg;
          prim = seg;
          seg = prox;
        }
        if (j == fibo) {
          printf("Fib(%i) = %lli\n", fibo, prox);
        }
      }
    }
  }
}

#include <stdio.h>
#include <stdlib.h>
int main() {
  int *par, *impar, contPar = 0, contImpar = 0, val, i, j;

  impar = (int*) malloc (5 * sizeof(int));
  par   = (int*) malloc (5 * sizeof(int));

  for(i = 0; i < 15; i++) {
    scanf("%i", &val);
    if (val % 2) {
      impar[contImpar] = val;
      contImpar++;
      if (contImpar == 5) {
        for(j = 0; j < 5; j++) {
          printf("impar[%i] = %i\n", j, impar[j]);
        }
        free(impar);
        impar = (int*) malloc (5 * sizeof(int));
        contImpar = 0;
      }
    } else {
      par[contPar] = val;
      contPar++;
      if (contPar == 5) {
        for(j = 0; j < 5; j++) {
          printf("par[%i] = %i\n", j, par[j]);
        }
        free(par);
        par = (int*) malloc (5 * sizeof(int));
        contPar = 0;
      }
    }
  }
  for(i = 0; i < contImpar; i++) {
    printf("impar[%i] = %i\n", i, impar[i]);
  }

  for(i = 0; i < contPar; i++) {
    printf("par[%i] = %i\n", i, par[i]);
  }
}

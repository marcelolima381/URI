#include <stdio.h>
int main() {
  int i, nPositivos = 0;
  float media = 0, val;

  for(i = 0; i < 6; i++) {
    scanf("%f", &val);
    if (val > 0) {
      nPositivos++;
      media += val;
    }
  }

  media /= nPositivos;

  printf("%i valores positivos\n%.1f\n", nPositivos, media);

}

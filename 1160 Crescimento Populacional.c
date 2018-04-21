#include <stdio.h>
#include <math.h>
int main() {
  int n, i, anos;
  int pa, pb;
  double g1, g2;

  scanf("%i", &n);

  for (i = 0; i < n; i++) {
    scanf("%i %i %lf %lf", &pa, &pb, &g1, &g2);

    anos = 0;
    while(anos <= 100 && pa <= pb) {
      pa = floor(pa * (1.0 + (double)g1/100));
      pb = floor(pb * (1.0 + (double)g2/100));
      anos++;
    }

    if (anos <= 100) {
      printf("%i anos.\n", anos);
    } else {
      printf("Mais de 1 seculo.\n");
    }
  }
}

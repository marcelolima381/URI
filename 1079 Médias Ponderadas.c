#include <stdio.h>
int main() {
  int i, n;
  float val1, val2, val3, media;

  scanf("%i", &n);

  for(i = 0; i < n; i++) {
    scanf("%f %f %f", &val1, &val2, &val3);
    media = (val1*2+val2*3+val3*5)/10;
    printf("%.1f\n", media);
  }
}

#include <stdio.h>
int main() {
  int n, i, sum = 0, ant1, ant2;

  scanf("%i", &n);

  if (n == 1) {
    printf("0\n");
  }
  else if (n == 2) {
    printf("0 1\n");
  }
  else {
    printf("0 1 ");
    ant1 = 0;
    ant2 = 1;
    for(i = 1; i <= n-2; i++) {
      sum = ant1 + ant2;
      ant1 = ant2;
      ant2 = sum;
      if (i == n-2) {
        printf("%i\n", sum);
      }
      else {
        printf("%i ", sum);
      }
    }
  }
}

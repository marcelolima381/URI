#include <stdio.h>
int main() {
  int i, a, n, sum = 0;

  scanf("%i", &a);
  sum = a;

  do {
      scanf("%i", &n);
  } while(n <= 0);

  for(i = 1; i < n; i++) {
    sum += a + i;
  }

  printf("%i\n", sum);
}

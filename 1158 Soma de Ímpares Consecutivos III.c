#include <stdio.h>
int main() {
  int n, x, y, i, j, sum;

  scanf("%i", &n);

  for(i = 0; i < n; i++) {
    scanf("%i %i", &x, &y);
    if (x % 2 == 0) {
      x++;
    }

    sum = 0;
    for(j = 0; j < y; j++, sum += x, x += 2);
    printf("%i\n", sum);
  }
}

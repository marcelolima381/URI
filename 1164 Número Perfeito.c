#include <stdio.h>
int main() {
  int n, i, j, val, count;

  scanf("%i", &n);

  for(i = 0; i < n; i++) {
    scanf("%i", &val);
    j = 1;
    count = 0;
    while (j < val) {
      if (val % j == 0) {
        count += j;
      }
      j++;
    }
    if (count == val) {
      printf("%i eh perfeito\n", val);
    } else {
      printf("%i nao eh perfeito\n", val);
    }
  }
}

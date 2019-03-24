#include <stdio.h>
int main() {
  int n, i, j, val, count;

  scanf("%i", &n);

  for(i = 0; i < n; i++) {
    scanf("%i", &val);
    count = 0;
    for(j = 1; j <= val; j++) {
      if (val % j == 0) {
        count++;
      }
      if (count > 2) {
        printf("%i nao eh primo\n", val);
        break;
      }
    }
    if (count == 2) {
      printf("%i eh primo\n", val);
    }
  }
}

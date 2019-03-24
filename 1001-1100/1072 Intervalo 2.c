#include <stdio.h>
int main() {
  int i, n, val;
  int in = 0, out = 0;

  scanf("%i", &n);

  for (i = 0; i < n; i++) {
    scanf("%i", &val);

    if (val >= 10 && val <= 20) {
      in++;
    }
    else {
      out++;
    }

  }

  printf("%i in\n%i out\n", in, out);
}

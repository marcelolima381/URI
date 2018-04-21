#include <stdio.h>
int main() {
  int val, i;

  scanf("%i", &val);

  for (i = 1; i <= val; i++) {
    if (val % i == 0) {
      printf("%i\n", i);
    }
  }
}

#include <stdio.h>
int main() {
  int val, i;

  scanf("%i", &val);

  for(i = 1; i <= 10000; i++) {
    if (i % val == 2) {
      printf("%i\n", i);
    }
  }
}

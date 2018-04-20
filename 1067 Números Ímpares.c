#include <stdio.h>
int main() {
  int i = 1, val;

  scanf("%i", &val);

  while(i < val) {
    printf("%i\n", i);
    i += 2;
  }

  if (val % 2 != 0) {
    printf("%i\n", val);
  }
}

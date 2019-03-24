#include <stdio.h>
int main() {
  int i, val;

  scanf("%i", &val);

  for(i = 1; i <= 10; i++) {
    printf("%i x %i = %i\n", i, val, i*val);
  }
}

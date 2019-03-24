#include <stdio.h>
int main() {
  int x, y, i;

  scanf("%i %i", &x, &y);

  for(i = 0; i < y; i++) {
    if ((i+1) % x != 0) {
      printf("%i ", i+1);
    } else {
      printf("%i\n", i+1);
    }
  }
}

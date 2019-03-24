#include <stdio.h>
int main() {
  int val, cont = 0, i;

  for(i = 0; i < 5; i++) {
    scanf("%i", &val);
    if (val % 2 == 0) {
      cont++;
    }
  }

  printf("%i valores pares\n", cont);
}

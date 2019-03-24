#include <stdio.h>
int main() {
  int i = 1, j = 7;

  while (i <= 9) {
    printf("I=%i J=%i\n", i, j);
    j--;
    printf("I=%i J=%i\n", i, j);
    j--;
    printf("I=%i J=%i\n", i, j);
    j += 4;
    i += 2;
  }
}

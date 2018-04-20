#include <stdio.h>
int main() {
  int i, cont = 0;
  float val;
  for(i = 0; i < 6; i++) {
    scanf("%f", &val);
    if (val > 0) {
      cont++;
    }
  }
  printf("%i valores positivos\n", cont);
}

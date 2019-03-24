#include <stdio.h>
int main() {
  int x, z, i = 0, sum = 0;

  scanf("%i", &x);

  do {
      scanf("%i", &z);
  } while(z <= x);


  while(sum < z) {
    sum += x;
    x++;
    i++;
  }

  printf("%i\n", i);
}

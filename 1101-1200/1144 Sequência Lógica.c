#include <stdio.h>
#include <math.h>
int main() {
  int val, i, swap = 0;
  long int x1 = 1, x2, x3;

  scanf("%i", &val);
  for (i = 0; i < val; i++) {
    x2 = pow(x1,2);
    x3 = pow(x1,3);

    printf("%li %li %li\n", x1, x2, x3);
    printf("%li %li %li\n", x1, x2+1, x3+1);
    x1++;
  }
}

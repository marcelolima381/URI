#include <stdio.h>
#include <math.h>
int main() {
  int val1, val2, val3;
  int jump, maior;

  scanf("%i %i %i", &val1, &val2, &val3);

  jump = (val1+val2+abs(val1-val2))/2;
  maior = (jump+val3+abs(jump-val3))/2;

  printf("%i eh o maior\n", maior);

}

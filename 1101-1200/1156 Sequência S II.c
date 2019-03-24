#include <stdio.h>
int main() {
  double sum = 0, num = 3, den = 2;
  int i;

  for(i = 0; i < 13; i++, sum += (double)num/den, num += 2, den *= 2);

  printf("%.2lf\n", sum+1);
}

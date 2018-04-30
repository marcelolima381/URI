#include <stdio.h>
int main() {
  int i;
  double val;

  scanf("%lf", &val);
  for(i = 0; i < 100; printf("N[%i] = %.4lf\n", i, val), i++, val /= (double)2.0);

}

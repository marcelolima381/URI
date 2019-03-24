#include <stdio.h>
int main() {
  int i;
  double s = 0;

  for (i = 1; i < 100; i++) {
    s += 1/(float)(i+1);
  }

  printf("%.2lf\n", s+1);
}

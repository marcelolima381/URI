#include <stdio.h>
int main() {
  int n, swt = 0, i;

  scanf("%i", &n);

  for(i = 0; i < 1000; i++) {
    if (swt < n) {
      printf("N[%i] = %i\n", i, swt);
      swt++;
    } else {
      swt = 0;
      printf("N[%i] = %i\n", i ,swt);
      swt++;
    }
  }
}

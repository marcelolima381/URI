#include <stdio.h>
int main() {
  long int i, n;

  scanf("%li", &n);

  for (i = 2; i <= n; i += 2) {
    printf("%li^2 = %li\n", i, i*i);
  }
}

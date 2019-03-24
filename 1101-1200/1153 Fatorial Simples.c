#include <stdio.h>
int main() {
  int n, i, sum, fat;

  scanf("%i", &n);
  fat = n;
  sum = fat;
  fat--;
  for(i = 0; i < n - 1; i++) {
    sum *= fat;
    fat--;
  }

  printf("%i\n", sum);
}

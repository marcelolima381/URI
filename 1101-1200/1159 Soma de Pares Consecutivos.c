#include <stdio.h>
int main() {
  int val = 1, sum, i;

  while(1) {
    scanf("%i", &val);
    if (val == 0) {
      return 0;
    }
    if (val % 2 != 0) {
      val++;
    }
    sum = 0;
    for (i = 0; i < 5; i++, sum += val, val += 2);
    printf("%i\n", sum);
  }
}

#include <stdio.h>
int main() {
  int i, val;

  scanf("%i", &val);

  if (val % 2 == 0) {
    val++;
  }

  for(i = 0; i < 6; i++, val += 2) {
    printf("%i\n", val);
  }
}

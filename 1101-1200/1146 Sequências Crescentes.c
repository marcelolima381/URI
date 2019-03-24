#include <stdio.h>
int main() {
  int i, val;

  while(1) {
    scanf("%i", &val);
    if (val == 0) {
      return 0;
    }

    for(i = 1; i <= val; i++) {
      if (i < val) {
        printf("%i ", i);
      }
      else {
        printf("%i\n", i);
      }

    }
  }
}

#include <stdio.h>
int main() {
  int i, n, val;

  scanf("%i", &n);

  for(i = 0; i < n; i++) {
    scanf("%i", &val);

    if (val == 0)
      printf("NULL\n");

    else {
      if (val % 2 == 0) {
        printf("EVEN ");
      }
      else {
        printf("ODD ");
      }
      
      if (val > 0) {
        printf("POSITIVE\n");
      }
      else {
        printf("NEGATIVE\n");
      }
    }
  }
}

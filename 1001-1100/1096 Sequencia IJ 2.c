#include <stdio.h>
int main() {
  int i = 1;

  while(i <= 9) {
    printf("I=%i J=7\n", i);
    printf("I=%i J=6\n", i);
    printf("I=%i J=5\n", i);
    i += 2;
  }

}

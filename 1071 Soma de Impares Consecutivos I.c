#include <stdio.h>
int main() {
  int a, b, i, sum = 0;

  scanf("%i %i" ,&a, &b);


  if (a < b) {

    if (a % 2 == 0) {
      a++;
    }
    else {
      a += 2;
    }

    while (a < b) {
      sum += a;
      a += 2;
    }

  }
  else if (a > b) {

    if (b % 2 == 0) {
      b++;
    }
    else {
      b += 2;
    }

    while(b < a) {
      sum += b;
      b += 2;
    }

  }
  printf("%i\n", sum);
}

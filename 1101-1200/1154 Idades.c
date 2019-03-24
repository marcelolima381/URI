#include <stdio.h>
int main() {
  int idade = 0, sum = 0, count = 0;

  while (1) {
    scanf("%i", &idade);
    if (idade > 0) {
      sum += idade;
      count++;
    } else {
      printf("%.2f\n", (float)sum/(float)count);
      return 0;
    }
  }
}

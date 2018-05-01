#include <stdio.h>
int main() {
  float matriz[12][12], val = 0, count = 0;
  int i, j;
  char operacao;

  scanf("%c", &operacao);

  for(i = 0; i < 12; i++) {
    for(j = 0; j < 12; j++) {
      scanf("%f", &matriz[i][j]);
      if (j > i) {
        val += matriz[i][j];
        count++;
      }
    }
  }

  if (operacao == 'M') {
    val /= (float)count;
  }

  printf("%.1f\n", val);
}

#include <stdio.h>
int main() {
  int coluna, i, j;
  float matriz[12][12], val = 0;
  char operacao;

  scanf("%i", &coluna);
  getchar();
  scanf("%c", &operacao);

  for(i = 0; i < 12; i++) {
    for(j = 0; j < 12; j++) {
      scanf("%f", &matriz[i][j]);
    }
  }

  switch (operacao) {
    case 'S':
    for(i = 0; i < 12; i++) {
      val += matriz[i][coluna];
    }
    printf("%.1f\n", val);
    break;

    case 'M':
    for(i = 0; i < 12; i++) {
      val += matriz[i][coluna];
    }
    val /= 12.0;
    printf("%.1f\n", val);
    break;
  }
}

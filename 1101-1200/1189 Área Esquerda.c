#include <stdio.h>
int main() {
  double matriz[12][12], val = 0, count = 0;
  int i, j;
  char operacao;
  // srand(time(NULL));
  scanf("%c", &operacao);

  for(i = 0; i < 12; i++) {
    for(j = 0; j < 12; j++) {
      // matriz[i][j]=rand() % 100;
      scanf("%lf", &matriz[i][j]);
      if (i + j <= 10 && i > j) {
        val += matriz[i][j];
        count++;
      }
    }
  }

  if (operacao == 'M') {
    val /= (double)count;
  }

  printf("%.1lf\n", val);
}

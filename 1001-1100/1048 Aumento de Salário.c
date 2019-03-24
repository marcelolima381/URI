#include <stdio.h>
void reajustaSalario(float salario, float reajuste, int percentual) {
  printf("Novo salario: %.2f\n", salario*reajuste);
  printf("Reajuste ganho: %.2f\n", salario*reajuste-salario);
  printf("Em percentual: %i %%\n", percentual);
}
int main() {
  float salario;

  scanf("%f", &salario);

  if (salario <= 400.00) {
    reajustaSalario(salario, 1.15, 15);
  }
  else if (salario > 400.00 && salario <= 800.00) {
    reajustaSalario(salario, 1.12, 12);
  }
  else if (salario > 800 && salario <= 1200.00) {
    reajustaSalario(salario, 1.10, 10);
  }
  else if (salario > 1200 && salario <= 2000.00) {
    reajustaSalario(salario, 1.07, 7);
  }
  else {
    reajustaSalario(salario, 1.04, 4);
  }
}

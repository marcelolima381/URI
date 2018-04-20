#include <stdio.h>
int main() {
  int tempo;
  int horas = 0, minutos = 0, segundos = 0;

  scanf("%i", &tempo);

  while (tempo >= 3600) {
    horas++;
    tempo -= 3600;
  }

  while(tempo >= 60) {
    minutos++;
    tempo -= 60;
  }

  segundos = tempo;

  printf("%i:%i:%i\n", horas, minutos, segundos);
}

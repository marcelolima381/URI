#include <stdio.h>
#include <math.h>
void formatOutput(double i, double j) {
  double epslon = 0.00005;

  if (i <= floor(i) + epslon && i >= floor(i)- epslon){
  // if (i - floor(i) <= 0.000001) {
    printf("I=%.0lf ", i);
  } else {
    printf("I=%.1lf ", i);
  }
  if (j < floor(j) + epslon && j > floor(j)- epslon) {
  // if (j - floor(j) <= 0.000001) {
    printf("J=%.0lf\n", j);
  } else {
    printf("J=%.1lf\n", j);
  }
}

int main() {
double i = 0, j = 1;

  do {
    formatOutput(i,j);
    formatOutput(i,j+1);
    formatOutput(i,j+2);
    i = (float)i + 0.2;
    j = (float)j + 0.2;
  } while (i <= 2.2);
}

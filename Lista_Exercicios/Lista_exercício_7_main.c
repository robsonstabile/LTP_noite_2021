#include <stdio.h>

int main(void) {

  float e_r1, e_r2, e_r3, e_r4, s_req;

  printf("Calculadora para Resistor em Série\n\n");

  printf("Entre com o Valor do 1° Resistor em [homs]:\n ");
  scanf("%f",&e_r1);

  printf("Entre com o Valor do 2° Resistor em [homs]:\n ");
  scanf("%f",&e_r2);

  printf("Entre com o Valor do 3° Resistor em [homs]:\n ");
  scanf("%f",&e_r3);

  printf("Entre com o Valor do 4° Resistor em [homs]:\n ");
  scanf("%f",&e_r4);

  s_req = e_r1 + e_r2 + e_r3 + e_r4;
  printf("Resistência Equivalente em [homs]: \n %.f\n",s_req);

  return 0;
}
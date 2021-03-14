#include <stdio.h>

int main(void) {

  int var_A, var_B, var_temp;
  
  printf("Digite a valor de A:\n");
  scanf("%i",&var_A);

  printf("Digite o Valor de B:\n");
  scanf("%i",&var_B);

  var_temp = var_A;
  var_A = var_B;
  var_B = var_temp;
  printf("Valor de A:%.i\n",var_A);
    printf("Valor de B:%.i\n",var_B);

  return 0;
}
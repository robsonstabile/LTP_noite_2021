#include <stdio.h>

int main(void) {

  int e_A, e_B, s_A, s_B;
  
  e_A = 10;
  printf("Valor de A:%i\n",e_A);
  e_B = 20;
  printf("Valor de B:%i\n",e_B);
  s_A = e_A * 2 ;
  s_B = e_B / 2 ;

  printf("novo valor de A:%i\n",s_A);

  printf("novo valor de B: %i", s_B);
  return 0;
}
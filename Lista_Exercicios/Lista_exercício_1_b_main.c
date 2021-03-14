#include <stdio.h>

int main(void) {

  int e_num_1, e_num_2, e_num_3;

  printf("Entre com o 1° número:\n");
  scanf("%i", &e_num_1);

  printf("Entre com o 2° número:\n");
  scanf("%i", &e_num_2);

  printf("Entre com o 3° número:\n");
  scanf("%i", &e_num_3);

  if (e_num_1>e_num_2){

   if(e_num_2>e_num_3){
     printf("Ordem Crescente:\n%i\n%i\n%i\n",e_num_3,e_num_2,e_num_1);
   }else if (e_num_1>e_num_3){
     printf("Ordem Crescente:\n%i\n%i\n%i\n",e_num_2,e_num_3,e_num_1);
   }else {
     printf("Ordem Crescente:\n%i\n%i\n%i\n",e_num_2, e_num_1, e_num_3);
   }
   }else if (e_num_1>e_num_3){
     printf("Ordem Crescente:\n%i\n%i\n%i\n",e_num_3,e_num_1,e_num_2);
   }else if(e_num_2>e_num_3){
     printf("Ordem Crescente:\n%i\n%i\n%i\n",e_num_1,e_num_3,e_num_2);
   }else {
     printf("Ordem Crescente:\n%i\n%i\n%i\n",e_num_1,e_num_2,e_num_3);
   }

  return 0;
}
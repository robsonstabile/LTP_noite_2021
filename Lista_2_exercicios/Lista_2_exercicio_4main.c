#include <stdio.h>
#include <unistd.h>

int main(void) {

  
  int e_botao,aceso = 1, apagado = 0,v_aux;
 
  printf("digite '0' para desligado e '1' para ligado:\n");
  scanf("%d", &e_botao);
  
  v_aux = e_botao ;
  while(v_aux < 2){
  
  if(e_botao == 0){
    printf("\n Led  Apagado\n");
    e_botao++;
    sleep(1);
  }
  if (e_botao == 1) {
    printf("\n Led  Aceso \n");
    e_botao--;
  sleep(1);
    
  }  
  
  } 
  
  return 0;
}
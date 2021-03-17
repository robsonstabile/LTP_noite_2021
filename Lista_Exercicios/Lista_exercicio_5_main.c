#include <stdio.h>


int main(void) {

  char e_sexo;
  float e_altura;

  printf("Descubra seu peso ideal atravez do sexo e altura:\n\n");

printf("Qual o seu sexo digite 0 para feminino ou 1 para masculino:\n");
    scanf("%c",&e_sexo);

  printf("Qual a sua altura:\n");
  scanf("%f", &e_altura);

    
  if (e_sexo =='0' ){

    printf("Peso ideal :%.3f\n",(62.1 * e_altura)-44.7);
  }
  else if(e_sexo == '1'){
   
    printf("Peso ideal :%.3f\n",(72.7 * e_altura)-58);
  }
  else

  { printf("\nLetra Invalido informe 0 = Feminino ou 1 = Masculino.");
  }
      
  return 0;
}
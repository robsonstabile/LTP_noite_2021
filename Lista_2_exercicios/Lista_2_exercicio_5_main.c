#include <stdio.h>
#include <unistd.h>

int main(void) {

  int e_tmp_radi ;

    
    printf("Digite uma Temperatura  entre 65°C a 95°C : \n");
    scanf("%d",& e_tmp_radi);
    
    while (e_tmp_radi <= 92 && e_tmp_radi>= 65){
      
     
      if (e_tmp_radi < 90)
      {
        printf("\n\n Temperatura :   %d °C \n\n",e_tmp_radi);
        printf("\n Ventoinha Desligada \n");
        sleep(01);
       
      }
        else if(e_tmp_radi >= 90)
        {
          printf("\n\n Temperatura :  %d °C\n\n",e_tmp_radi);
          printf("\n Ventoinha Ligada \n");
          sleep(01);
        }        
        e_tmp_radi++;

    }e_tmp_radi=e_tmp_radi - 2;

      while (e_tmp_radi <= 100){
      
     
      if (e_tmp_radi < 71)
      {
        printf("\n\n Temperatura :   %d °C \n\n",e_tmp_radi);
        printf("\n Ventoinha Desligada \n");
        sleep(01);
       
      }
        else if(e_tmp_radi < 95)
        {
          printf("\n\n Temperatura :  %d °C \n\n",e_tmp_radi);
          printf("\n Ventoinha Ligada \n");
          sleep(01);
        }
       --e_tmp_radi;
    
       if (e_tmp_radi==64){
        break;
       }
        else if (e_tmp_radi < 64 || e_tmp_radi > 95){ 
          printf("Erro Temperatura °C Fora do Padrao\n");
          printf("Digite uma Temperatura  entre 65°C a 95°C : \n");
          scanf("%d",& e_tmp_radi);
         
        }
      
    }
 
  return 0;
}
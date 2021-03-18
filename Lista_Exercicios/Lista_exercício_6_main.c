#include <stdio.h>


int main(void) {

  float PRATA_A,PRATA,COBRE_A,COBRE,OURO_A,OURO,ALUMINIO_A,ALUMINIO,TUNGSTENIO_A,TUNGSTENIO,e_diametro, e_comprimento, e_temperatura_uso ,res_material,s_resi_fio ,area;
  int  e_material;

 PRATA_A = 0.0038;
 PRATA = 0.00000159;
 COBRE_A = 0.0039; 
 COBRE = 0.00000172;
 OURO_A = 0.0034;
 OURO = 0.00000244;
 ALUMINIO_A = 0.0039;
 ALUMINIO = 0.00000292;
 TUNGSTENIO_A = 0.0045;
 TUNGSTENIO = 0.0000056;

  printf("Calculo da Resistência de um Fio:\n\n");

  printf("Informe o Material do Fio\n");
  printf(" 1 - Prata\n");
  printf(" 2 - Cobre\n");
  printf(" 3 - Ouro\n");
  printf(" 4 - Aluminio\n");
  printf(" 5 - Tungstenio\n");
  scanf("%i",&e_material);

  

  printf("Qual o Diametro do Fio em [cm]:\n");
   scanf("%f",&e_diametro);
      area = e_diametro /2;
  printf("Qual o Comprimento do Fio em[cm]:\n");
     scanf("%f",&e_comprimento);

  printf("Qual a Temperatura do Fio em[°C]:\n");
      scanf("%f",&e_temperatura_uso);
  if (e_material == 1){
         res_material =  PRATA * ((1+PRATA_A)*(e_temperatura_uso - 20));
  
   }else if (e_material == 2){
        res_material = COBRE * ((1+ COBRE_A)*(e_temperatura_uso - 20));

   }else if (e_material == 3){
          res_material = OURO * ((1+ OURO_A)*(e_temperatura_uso - 20));

   }else if (e_material == 4){
          res_material = ALUMINIO * ((1+ ALUMINIO_A)*(e_temperatura_uso - 20));

   }else if (e_material == 5){
            res_material = TUNGSTENIO * ((1+ TUNGSTENIO_A)*(e_temperatura_uso - 20));

   }else {
          printf("Erro Opção Invalida.\n");

   }
  
  s_resi_fio = res_material * (e_comprimento / area);

  printf("Resistencia do Fio em [Ohms]:%.9f",s_resi_fio);
  return 0;
}
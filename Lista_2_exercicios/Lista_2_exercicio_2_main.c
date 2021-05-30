#include <stdio.h>

int main(void) {

int e_nro[3];
  
  
   for( e_nro[0] = 1; e_nro[0] <= 9;e_nro[0]++)
   {
      for (e_nro[1] = 0;e_nro[1] <=9;e_nro[1]++)
      {    
         for (e_nro[2] = 0 ;e_nro[2] <= 9 ; e_nro[2]++)
         { 
           
printf("(%d) (%d*%d*%d)\n",(e_nro[0]*e_nro[1]*e_nro[2]),e_nro[0],e_nro[1],e_nro[2]);
            
         }
      }
    }
  return 0;
}
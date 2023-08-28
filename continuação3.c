#include<stdio.h>
#include<math.h>

main(){

    // int porque o numero vai ser inteiro
   int area, largura, comprimento;
   

   //calculando a área da sala base * altura "%d %d", - (%d apenas quando a variavel for int)
   printf("Digite a largura da area solicitada");
   scanf("%d %d", &largura, &comprimento);

   area = largura * comprimento;

   printf("\nArea da sala: %dm2", area );

   
   
   
   
   
   
   }



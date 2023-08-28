#include<stdio.h>
#include<math.h>

main(){

   int numero1, numero2, soma, multi, sub, potencia, modulo;
   float div;
   


printf("Digite dois numeros");
scanf("%d %d,", &numero1, &numero2);

soma = numero1 + numero2;
multi = numero1 * numero2;
sub = numero1 - numero2;
div = (float)numero1/(float)numero2;

printf("Soma: %d, \nMultiplicacao: %d, \nSubtração: %d, \nDivisão: %.2f",soma, multi, sub, div);

//potencia

potencia = pow(2, 7);

printf("\nPotencia: %d", potencia);

//Opereção modulo

modulo = numero1 % numero2;

printf("\nResto da divisão: %d", modulo);

}
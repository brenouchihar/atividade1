#include<stdio.h>
#include<math.h>
main(){

/*O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica).
Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, 
escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor

*/

float custo, porcentagemdistribuidor = 0.28, imposto = 0.45, custofinal;

printf("Digite o custo de fabrica");
scanf("%f", &custo);

custofinal = (custo * imposto) + (custo * porcentagemdistribuidor) + custo;

printf("Custo final do carro: %f", custofinal);







}